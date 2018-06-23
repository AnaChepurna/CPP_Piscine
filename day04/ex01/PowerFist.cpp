//
// Created by Anastasia CHEPURNA on 22.06.2018.
//

#include "PowerFist.hpp"

std::string const PowerFist::_name = "Power Fist";

PowerFist::PowerFist(): AWeapon(_name, _apcost, _damage) {
}

PowerFist::~PowerFist() {

}

PowerFist::PowerFist(PowerFist const & src): AWeapon(src) {
}

void PowerFist::attack() const {
    std::cout << "* pschhh... SBAM! *" << std::endl;
}




