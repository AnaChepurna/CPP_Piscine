//
// Created by Anastasia CHEPURNA on 22.06.2018.
//

#include "PlasmaRifle.hpp"

std::string const PlasmaRifle::_name = "Plasma Rifle";

PlasmaRifle::PlasmaRifle()
{
    name = _name;
    apcost = _apcost;
    damage = _damage;
}

PlasmaRifle::~PlasmaRifle()
{}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &src) {
    this->name = src.name;
    this->damage = src.damage;
    this->apcost = src.apcost;
    return (*this);
}

void PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &src) {
    *this = src;
}






