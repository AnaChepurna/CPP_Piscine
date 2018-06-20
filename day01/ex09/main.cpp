//
// Created by Anastasia CHEPURNA on 20.06.2018.
//

#include "Logger.hpp"

int main()
{
    std::string command;
    std::string message;

    Logger log = Logger("log");
    while (42)
    {
        std::cout << "Enter source (file or console): ";
        getline(std::cin, command);
        if (command != "file" && command != "console")
            break;
        std::cout << "Enter message: ";
        getline(std::cin, message);
        log.log(command, message);
    }
}