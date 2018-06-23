//
// Created by Anastasia CHEPURNA on 6/23/18.
//

#ifndef ISPACEMARINE_HPP
#define ISPACEMARINE_HPP

#include <iostream>

class ISpaceMarine {

public:
    virtual ~ISpaceMarine() {}
    virtual ISpaceMarine* clone() const = 0;
    virtual void battleCry() const = 0;
    virtual void rangedAttack() const = 0;
    virtual void meleeAttack() const = 0;
    ISpaceMarine *next;
};


#endif //PISCINE_CPP_ISPACEMARINE_H
