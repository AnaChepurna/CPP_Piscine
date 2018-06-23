//
// Created by Anastasia CHEPURNA on 6/23/18.
//

#include "RadScorpion.hpp"

const std::string RadScorpion::_type = "Rad Scorpion";

RadScorpion::RadScorpion(): Enemy(_hp, _type) {
    std::cout << getType() << ": * click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &src) {
    *this = src;
    std::cout << getType() << ": * click click click *" << std::endl;
}

RadScorpion::~RadScorpion() {
    std::cout << getType() << ": * SPROTCH *" << std::endl;
}

//RadScorpion &RadScorpion::operator=(RadScorpion const &src) {
//    this->hit_points = src.hit_points;
//    this->type = src.type;
//    return (*this);
//}

void RadScorpion::takeDamage(int damage) {
    Enemy::takeDamage(damage);
}


