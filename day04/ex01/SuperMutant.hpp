//
// Created by Anastasia CHEPURNA on 6/23/18.
//

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP


#include "Enemy.hpp"

class SuperMutant: public Enemy {
private:
    static const int _hp = 170;
    static const std::string _type;// = "Super Mutant";
public:
    SuperMutant();
    SuperMutant(SuperMutant const & src);
    virtual ~SuperMutant();
    using Enemy::operator=;
    virtual void takeDamage(int);
};


#endif
