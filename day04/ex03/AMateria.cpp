//
// Created by Anastasia CHEPURNA on 6/23/18.
//

#include "AMateria.hpp"

AMateria::AMateria(void): type(""), xp(0) {
}

AMateria::AMateria(std::string const & type): type(type), xp(0) {
}

AMateria::AMateria(AMateria const & cpy){
    *this = cpy;
}

AMateria::~AMateria() {}

AMateria &	AMateria::operator=(AMateria const & rhs) {
    xp = rhs.getXP();
    return (*this);
}

std::string const &	AMateria::getType() const {
    return (type);
}

unsigned int		AMateria::getXP() const {
    return (xp);
}

void				AMateria::setXP() {
    xp += 10;
}

void		AMateria::use(ICharacter& target) {
    (void)target;
}
