//
// Created by Anastasia CHEPURNA on 22.06.2018.
//

#include "PowerFist.hpp"

PowerFist::PowerFist():
name(_name), apcost(_apcost), damage(_damage){
}

PowerFist::~PowerFist() {

}

PowerFist::PowerFist(PowerFist &const src) {
    *this = src;
}

PowerFist &PowerFist::operator=(PowerFist const &src) {
    this->name = name;
    this->damage = damage;
    this->apcost = apcost;
    return (*this);
}

void PowerFist::attack() const {
    std::cout << "* pschhh... SBAM! *" << std::endl;
}




