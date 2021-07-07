#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>

class Contact {
  public:
    Contact(std::string name="empty");
    ~Contact(void);
    void setName(std::string);
    std::string getName(void) const;

  private:
    std::string _name;
};

#endif
