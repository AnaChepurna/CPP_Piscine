//
// Created by Anastasia CHEPURNA on 20.06.2018.
//

#include "Pony.hpp"

Pony::Pony(std::string name):
        love(0), name(name)
{
    std::cout << "Pony " << name << " is appeared." << std::endl;
}

Pony::~Pony()
{
    std::cout << "Pony " << name << " is disappeared." << std::endl;
}

void Pony::feedPony()
{
    std::cout << "Feeding pony " << name << "." << std::endl;
    love++;
}

void Pony::showPonyLove()
{
    if (love < 1)
        std::cout << "Pony " << name << " is aftaid of you.";
    else if (love < 2)
        std::cout << "Pony " << name << " is interested of you.";
    else
        std::cout << "Pony " << name << " loves you!";
    std::cout << std::endl;
}


void    ponyOnTheHeap(std::string name)
{
    std::cout << "Pony on the Heap:" << std::endl;
    Pony   *pony = new Pony(name);
    pony->showPonyLove();
    pony->feedPony();
    pony->showPonyLove();
    pony->feedPony();
    pony->showPonyLove();
    delete pony;
}

void    ponyOnTheStack(std::string name)
{
    std::cout << "Pony on the Stack:" << std::endl;
    Pony   pony = Pony(name);
    pony.showPonyLove();
    pony.feedPony();
    pony.showPonyLove();
    pony.feedPony();
    pony.showPonyLove();
}