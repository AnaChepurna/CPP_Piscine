//
// Created by Anastasia CHEPURNA on 6/23/18.
//

#include "Cure.hpp"

const std::string  Cure::_name = "cure";

Cure::~Cure() {
}

AMateria *Cure::clone() const {
    return (new Cure(*this));
}

void Cure::use(ICharacter &target) {
    std::cout << "* heals " << target.getName() << "'s wounds * " << std::endl;
    AMateria::use(target);
}

Cure::Cure(void) : AMateria(_name) {
}

Cure::Cure(AMateria const &cpy) : AMateria(cpy) {
}
