//
// Created by Anastasia CHEPURNA on 20.06.2018.
//

#include "Human.hpp"

int main()
{
    Human warrior;
    std::string command;
    std::string target;

    while (42)
    {
        std::cout << "Choose attack: 1 - Melee attack; 2 - Ranged attack; 3 - Intimidating shout" << std::endl;
        getline(std::cin, command);
        if (command == "exit")
            break ;
        std::cout << "Enter target name: ";
        getline(std::cin, target);
        warrior.action(command, target);
    }
}