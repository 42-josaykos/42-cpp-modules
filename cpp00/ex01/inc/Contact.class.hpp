#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>

class Contact {
  public:
    Contact(void);
    ~Contact(void);
    void setInfos(std::string* infos);
    void getInfos(std::string* infos);

  private:
    std::string _firstName;
    std::string _lastName;
    std::string _nickname;
    std::string _login;
    std::string _postalAddress;
    std::string _email;
    std::string _phoneNumber;
    std::string _birthday;
    std::string _favoriteMeal;
    std::string _underwearColor;
    std::string _darkestSecret;
};

#endif
