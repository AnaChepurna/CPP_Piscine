//
// Created by Anastasia CHEPURNA on 6/23/18.
//

#include "Ice.hpp"

const std::string  Ice::_name = "ice";

Ice::~Ice() {
}

AMateria *Ice::clone() const {
    return (new Ice(*this));
}

void Ice::use(ICharacter &target) {
    std::cout << "* shoots an ice bolt at " << target.getName() <<" *" << std::endl;
    AMateria::use(target);
}

Ice::Ice(void) : AMateria(_name) {
}

Ice::Ice(AMateria const &cpy) : AMateria(cpy) {
}
