//
// Created by Anastasia CHEPURNA on 6/23/18.
//

#ifndef RADSCORPION_H
#define RADSCORPION_H


#include "Enemy.hpp"

class RadScorpion: public Enemy {
private:
    static const int _hp = 80;
    static const std::string _type;// = "Rad Scorpion";
public:
    RadScorpion();
    RadScorpion(RadScorpion const & src);
    virtual ~RadScorpion();
    RadScorpion &operator=(RadScorpion const & src);
    virtual void takeDamage(int damage);
};


#endif
