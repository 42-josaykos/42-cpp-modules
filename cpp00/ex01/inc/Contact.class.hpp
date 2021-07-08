#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>

class Contact {
  public:
    Contact(void);
    ~Contact(void);
    void setFirstName(std::string);
    void setLastName(std::string);
    void setNickName(std::string);
    void setLogin(std::string);
    void setPostalAddress(std::string);
    void setEmail(std::string);
    void setPhoneNumber(std::string);
    void setBirthday(std::string);
    void setFavoriteMeal(std::string);
    void setUnderwearColor(std::string);
    void setDarkestSecret(std::string);
    std::string getFirstName(void) const;
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
