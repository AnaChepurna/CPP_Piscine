//
// Created by Anastasia CHEPURNA on 6/23/18.
//

#include <iostream>
#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator( void ) {
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator( AssaultTerminator const & src ) {
    std::cout << "* teleports from space *" << std::endl;
    (void)src;
}

AssaultTerminator::~AssaultTerminator( void ) {
    std::cout << "I'll be back ..." << std::endl;
}

void	AssaultTerminator::battleCry( void ) const {
    std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}

void	AssaultTerminator::rangedAttack( void ) const {
    std::cout << "* does nothing *" << std::endl;
}

void	AssaultTerminator::meleeAttack( void ) const {
    std::cout << "* attack with chainsfists *" << std::endl;
}

ISpaceMarine *	AssaultTerminator::clone( void ) const {
    ISpaceMarine    *copy = new AssaultTerminator(*this);

    return (copy);
}

AssaultTerminator& AssaultTerminator::operator=(AssaultTerminator const & rhs) {
    (void)rhs;
    return (*this);
}