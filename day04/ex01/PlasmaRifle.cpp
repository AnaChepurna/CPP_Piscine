//
// Created by Anastasia CHEPURNA on 22.06.2018.
//

#include "PlasmaRifle.hpp"

std::string const PlasmaRifle::_name = "Plasma Rifle";

PlasmaRifle::PlasmaRifle(): AWeapon(_name, _apcost, _damage)
{
}

PlasmaRifle::~PlasmaRifle()
{}

void PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &src): AWeapon(src) {
}






