#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

const std::string RESET = "\033[0m";
const std::string RED = "\033[31m";

/******* template definition **************************************************/

template <typename T> class Array {
public:
  Array(void);
  Array(unsigned int const& n);
  Array(Array const& src);

  Array&   operator=(Array const& rhs);
  T&       operator[](unsigned int i);
  const T& operator[](unsigned int i) const;

  unsigned int size() const;
  void         destroy() const;

  class ReadAccessMemory : public std::exception {
  public:
    const char* what() const throw() { return ("Invalid ReadAccessMemory"); }
  };

private:
  virtual ~Array(void);
  unsigned int _size;
  T*           _content;
};

/******* ctors & dtor *********************************************************/

// default
template <typename T> Array<T>::Array(void) {
  // std::cout << "{ default ctor }" << std::endl;
  this->_content = new T[0]();
  this->_size = 0;
  return;
}

// single param int
template <typename T> Array<T>::Array(unsigned int const& n) {
  // std::cout << "{ size ctor }" << std::endl;
  this->_content = new T[n]();
  this->_size = n;

  return;
}

// copy
template <typename T> Array<T>::Array(Array const& src) {
  // std::cout << "{ copy ctor }" << std::endl;
  this->_content = new T[src._size];
  this->_size = src._size;
  for (unsigned int i = 0; i < this->_size; i++) {
    this->_content[i] = src._content[i];
  }
  return;
}

// dtor
template <typename T> Array<T>::~Array(void) {
  // std::cout << "{ dtor }" << std::endl;
  delete[] this->_content;
  return;
}

/******* member functions *****************************************************/

// return _size
template <typename T> unsigned int Array<T>::size() const {
  return this->_size;
}

// delete instance
template <typename T> void Array<T>::destroy() const { delete this; }

/******* operators ***********************************************************/

// assignation
template <typename T> Array<T>& Array<T>::operator=(Array const& rhs) {
  if (this != &rhs && this->_size) {
    delete this->_content;
    this->_content = new T[rhs._size];
    this->_size = rhs._size;
    for (unsigned int i = 0; i < this->_size; i++) {
      this->_content[i] = rhs._content[i];
    }
  }
  return *this;
};

// [] access
template <typename T> T& Array<T>::operator[](unsigned int i) {
  if (i < 0 || i >= this->_size) {
    throw ReadAccessMemory();
  }
  return this->_content[i];
}

// [] access, const return
template <typename T> const T& Array<T>::operator[](unsigned int i) const {
  if (i < 0 || i >= this->_size) {
    throw ReadAccessMemory();
  }
  return this->_content[i];
}

// pointer display
template <typename T>
std::ostream& operator<<(std::ostream& out, Array<T>& inst) {
  if (inst.size() > 0) {
    return out << inst[0];
  }
  return out << 0;
}

#endif
