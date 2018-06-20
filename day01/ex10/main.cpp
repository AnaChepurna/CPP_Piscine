//
// Created by Anastasia CHEPURNA on 20.06.2018.
//

#include <iostream>
#include <fstream>

int main(int c, char **v)
{
    std::string content;
    std::ifstream is;
    char buf;

    if (c == 1)
    {
        while (getline(std::cin, content))
            std::cout << content << std::endl;
    }
    else
    {
        int i = 0;
        while (++i < c)
        {
            is.open(v[i]);
            if (is.is_open())
            {
                while (is.read(&buf, 1))
                    std::cout << buf;
            }
            else
                std::cerr << v[0] << ": " << v[i] << ": "  << "No such file or directory" << std::endl;
            is.close();
        }
    }
}