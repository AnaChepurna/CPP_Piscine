//
// Created by Anastasia CHEPURNA on 20.06.2018.
//

#ifndef LOGGER_HPP
#define LOGGER_HPP


#include <iostream>
#include <fstream>
#include <map>

class Logger {
private:
    std::string logfile;

    std::string makeLogEntry(std::string message);
    void logToConsole(std::string message);
    void logToFile(std::string message);
public:
    Logger(std::string logfile);
    void log(std::string const & dest, std::string const & message);
};

#endif
