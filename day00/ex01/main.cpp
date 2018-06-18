//
// Created by Anastasia CHEPURNA on 18.06.2018.
//

#include "contact.h"
#include <iomanip>

void    get_command(std::string *command)
{
    std::cout << "Enter command > ";
    std::getline(std::cin, *command);
}

void    iterate(int *i, int *len)
{
    (*i)++;
    if (*i == 8)
        *i = 0;
    (*len)++;
    if (*len > 8)
        *len = 8;
}

void    showContacts(Contact base[], int len)
{
    int i;
    std::string index;

    i = -1;
    while (++i < len)
    {
        index = std::to_string(i + 1);
        base[i].showForSearch(index);
    }
}

int     search(Contact base[], int len)
{
    std::string command;
    std::string index;
    int i;

    if (len == 0)
    {
        std::cout << "No contacts allowed. Use ADD to create one" << std::endl;
        return (1);
    }
    showContacts(base, len);
    std::cout << "> ";
    std::getline(std::cin, command);
    std::cout << command << std::endl;
    i = -1;
    while (++i < len)
    {
        index = std::to_string(i + 1);
        if (command == index)
        {
            base[i].showForPresent();
            return (1);
        }
    }
    std::cout << "Enter index of one of following contacts:" << std::endl;
    return (0);
}

int     main(void)
{
    Contact base[8];
    std::string command;
    int i;
    int len;

    i = 0;
    len = 0;
    while (command != "EXIT")
    {
        get_command(&command);
        if (command == "ADD")
        {
            base[i].initContact();
            iterate(&i, &len);
        }
        else if (command == "SEARCH")
            while (!search(base, len))
            {}
        else if (command != "EXIT")
            std::cout << "Choose one of following commands: ADD, SEARCH, EXIT" << std::endl;
    }
}

