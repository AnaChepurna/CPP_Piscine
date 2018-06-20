//
// Created by Anastasia CHEPURNA on 18.06.2018.
//

#ifndef DAY00_CONTACT_H
#define DAY00_CONTACT_H

#include <iostream>
#include <string>
#include <iomanip>

class Contact {
private:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string login;
    std::string postalAddress;
    std::string emailAddress;
    std::string phoneNumber;
    std::string birthdayDate;
    std::string favoriteMeal;
    std::string underwearColor;
    std::string darkestSecret;

    void    showOneForSearch(std::string str);

public:
    Contact(void);
    void    initContact(void);
    void    showForSearch(std::string index);
    void    showForPresent(void);
};


#endif //DAY00_CONTACT_H
