//
// Created by Anastasia CHEPURNA on 6/23/18.
//

#ifndef CHARACTER_HPP
#define CHARACTER_HPP


#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character {
private:
    std::string name;
    int apcost;
    AWeapon *weapon;
    Character();
public:
    Character(std::string const & name);
    Character(Character const & src);
    Character &operator=(Character const & src);
    ~Character();
    void recoverAP();
    void equip(AWeapon*);
    void attack(Enemy*);
    std::string const getName() const;
    std::string getWeaponName() const;
    int getAP() const;
};

std::ostream & operator<<(std::ostream & o, Character const & c);


#endif
