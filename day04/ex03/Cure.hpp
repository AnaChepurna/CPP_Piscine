//
// Created by Anastasia CHEPURNA on 6/23/18.
//

#ifndef CURE_HPP
#define CURE_HPP


#include "AMateria.hpp"

class Cure : public AMateria {
private:
    static const std::string  _name;
public:
    Cure(void);
    Cure(AMateria const &cpy);
    virtual ~Cure();
    virtual AMateria *clone() const;
    virtual void use(ICharacter &target);
    using AMateria::operator=;
};

#endif
