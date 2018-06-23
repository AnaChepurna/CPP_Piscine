//
// Created by Anastasia CHEPURNA on 6/23/18.
//

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character: public ICharacter {
private:
    std::string 	name;
    AMateria**		materia;

    Character(void);
public:

    Character(std::string name);
    Character(Character const & cpy);
    ~Character();
    Character &	operator=(Character const & rhs);

    std::string const & getName() const;
    void 				equip(AMateria* m);
    void 				unequip(int idx);
    void 				use(int idx, ICharacter& target);
};


#endif
