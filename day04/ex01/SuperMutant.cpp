//
// Created by Anastasia CHEPURNA on 6/23/18.
//

#include "SuperMutant.hpp"

const std::string SuperMutant::_type = "Super Mutant";

SuperMutant::SuperMutant(): Enemy(_hp, _type) {
    std::cout << type << ": Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &src) {
    *this = src;
    std::cout << type << ": Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::~SuperMutant() {
    std::cout << type << ": Aaargh ..." << std::endl;
}

SuperMutant &SuperMutant::operator=(SuperMutant const &src) {
    this->hit_points = src.hit_points;
    this->type = src.type;
    return (*this);
}

void SuperMutant::takeDamage(int damage) {
    Enemy::takeDamage(damage - 3);
}
