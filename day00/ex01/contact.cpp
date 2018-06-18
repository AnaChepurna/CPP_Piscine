//
// Created by Anastasia CHEPURNA on 18.06.2018.
//

#include "contact.h"

Contact::Contact()
{}

void    Contact::initContact()
{
    std::cout << "first name: ";
    std::getline(std::cin, firstName);
    std::cout << "last name: ";
    std::getline(std::cin, lastName);
    std::cout << "nickname: ";
    std::getline(std::cin, nickname);
    std::cout << "login: ";
    std::getline(std::cin, login);
    std::cout << "postal address: ";
    std::getline(std::cin, postalAddress);
    std::cout << "email address: ";
    std::getline(std::cin, emailAddress);
    std::cout << "phone number: ";
    std::getline(std::cin, phoneNumber);
    std::cout << "birthday date: ";
    std::getline(std::cin, birthdayDate);
    std::cout << "favorite meal: ";
    std::getline(std::cin, favoriteMeal);
    std::cout << "underwear color: ";
    std::getline(std::cin, underwearColor);
    std::cout << "darkest secret: ";
    std::getline(std::cin, darkestSecret);
}

void    Contact::showOneForSearch(std::string str)
{
    size_t len;
    int i;

    len = str.size();
    if (len > 10)
    {
        i = -1;
        while (++i < 9)
            std::cout << str[i];
        std::cout << ".";
    }
    else
    {
        std::cout << str;
        i = 10 - (int)len;
        while (i--)
            std::cout << " ";
    }
}

void    Contact::showForSearch(std::string index)
{
    showOneForSearch(index);
    std::cout << '|';
    showOneForSearch(firstName);
    std::cout << '|';
    showOneForSearch(lastName);
    std::cout << '|';
    showOneForSearch(nickname);
    std::cout << std::endl;
}

void    Contact::showForPresent()
{
    std::cout << "first name: " << firstName << std::endl;
    std::cout << "last name: " << lastName << std::endl;
    std::cout << "nickname: " << nickname << std::endl;
    std::cout << "login: " << login << std::endl;
    std::cout << "postal address: " << postalAddress << std::endl;
    std::cout << "email address: " << emailAddress << std::endl;
    std::cout << "phone number: " << phoneNumber << std::endl;
    std::cout << "birthday date: " << birthdayDate << std::endl;
    std::cout << "favorite meal: " << favoriteMeal << std::endl;
    std::cout << "underwear color: " << underwearColor << std::endl;
    std::cout << "darkest secret: " << darkestSecret << std::endl;
}