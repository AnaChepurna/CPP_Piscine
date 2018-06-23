//
// Created by Anastasia CHEPURNA on 6/23/18.
//

#ifndef ICE_HPP
#define ICE_HPP


#include "AMateria.hpp"

class Ice: public AMateria {
    static const std::string  _name;
public:
    Ice(void);
    Ice(AMateria const &cpy);
    virtual ~Ice();
    virtual AMateria *clone() const;
    virtual void use(ICharacter &target);
    using AMateria::operator=;
};


#endif
