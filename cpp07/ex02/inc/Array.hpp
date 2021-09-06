#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T> class Array {

public:
  Array(void);
  Array(unsigned int const& n);
  Array(Array const& src);
  virtual ~Array(void);

  Array&   operator=(Array const& rhs);
  T&       operator[](unsigned int i);
  const T& operator[](unsigned int i) const;

  unsigned int size() const;

private:
  int _size;
  T*  _content;
};

template <typename T> Array<T>::Array(void) {
  std::cout << "{ default ctor }" << std::endl;
  this->_content = new T[0]();
  this->_size = 0;
  return;
}

template <typename T> Array<T>::Array(unsigned int const& n) {
  std::cout << "{ size ctor }" << std::endl;
  this->_content = new T[n]();
  this->_size = n;

  return;
}

template <typename T> Array<T>::Array(Array const& src) {
  std::cout << "{ copy ctor }" << std::endl;
  this->_content = new T[src._size];
  this->_size = src._size;
  for (int i = 0; i < this->_size; i++) {
    this->_content[i] = src._content[i];
  }
  return;
}

template <typename T> Array<T>::~Array(void) {
  std::cout << "{ dtor }" << std::endl;
  delete[] this->_content;
  return;
}

template <typename T> unsigned int Array<T>::size() const {
  return this->_size;
}

/******* operators ***********************************************************/

template <typename T> Array<T>& Array<T>::operator=(Array const& rhs) {
  if (this != &rhs && this->_size) {
    delete this->_content;
    this->_content = new T[rhs._size];
    this->_size = rhs._size;
    for (int i = 0; i < this->_size; i++) {
      this->_content[i] = rhs._content[i];
    }
  }
  return *this;
};

template <typename T> T& Array<T>::operator[](unsigned int i) {
  return this->_content[i];
}

template <typename T> const T& Array<T>::operator[](unsigned int i) const {
  return this->_content[i];
}

template <typename T>
std::ostream& operator<<(std::ostream& out, Array<T>& inst) {
  if (inst.size() > 0) {
    return out << inst[0];
  }
  return out << 0;
}

#endif
