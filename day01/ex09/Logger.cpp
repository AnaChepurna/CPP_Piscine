//
// Created by Anastasia CHEPURNA on 20.06.2018.
//

#include "Logger.hpp"

Logger::Logger(std::string logfile) :logfile(logfile)
{}

std::string Logger::makeLogEntry(std::string message)
{
    time_t		t;
    struct tm	*tm;
    char		buf[25];

    time(&t);
    tm = localtime(&t);

    strftime (buf, 25, "[%Y%m%d_%H%M%S] ", tm);
    std::string logEntry = buf;
    logEntry += message;
    return (logEntry);
}

void Logger::logToConsole(std::string message)
{
    std::clog << message << std::endl;
}

void Logger::logToFile(std::string message)
{
    std::ifstream	i;
    std::ofstream	o;
    char buf;
    std::string     content;

    i.open(logfile);
    if (i.is_open())
    {
        while ( i.read(&buf, 1))
            content += buf;
        i.close();
    }
    content += message;
    o.open(logfile);
    o << content << std::endl;
}

void Logger::log(std::string const &dest, std::string const &message)
{
    typedef void(Logger::*f)(std::string);
    std::map <std::string, f> m;
    m.insert(std::make_pair("file", &Logger::logToFile));
    m.insert(std::make_pair("console", &Logger::logToConsole));
    f &func = m[dest];
    (this->*func)(makeLogEntry(message));
}

