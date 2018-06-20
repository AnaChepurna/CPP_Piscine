//
// Created by Anastasia CHEPURNA on 20.06.2018.
//

#ifndef PONY_HPP
#define PONY_HPP

#include <string>
#include <iostream>

class Pony {
private:
    int love;
    std::string name;

public:
    Pony(std::string name);
    ~Pony(void);
    void feedPony(void);
    void showPonyLove(void);
};

void    ponyOnTheHeap(std::string name);
void    ponyOnTheStack(std::string name);

#endif
