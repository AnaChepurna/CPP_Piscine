//
// Created by Anastasia CHEPURNA on 6/23/18.
//

#include "Character.hpp"

Character::Character(): name(""), apcost(0), weapon(NULL) {
}

Character::Character(std::string const &name):
name(name), apcost(40), weapon(NULL){
}

Character::Character(Character const &src) {
    *this = src;
}

Character &Character::operator=(Character const &src) {
    this->name = src.name;
    this->apcost = src.apcost;
    this->weapon = src.weapon;
    return (*this);
}

Character::~Character() {

}

void Character::recoverAP() {
    apcost += 10;
    if (apcost > 40)
        apcost = 40;
}

void Character::equip(AWeapon *w) {
    weapon = w;
}

void Character::attack(Enemy *e) {
    if (weapon != NULL && apcost >= weapon->getAPCost())
    {
        std::cout << name << " attacks " << e->getType() << " with a " << weapon->getName() << std::endl;
        apcost -= weapon->getAPCost();
        weapon->attack();
        e->takeDamage(weapon->getDamage());
        if (e->getHP() == 0)
            delete e;
    }
}

std::string const Character::getName() const {
    return (name);
}

std::string Character::getWeaponName() const {
    if (weapon != nullptr)
        return (weapon->getName());
    else
        return ("nothing");
}

int Character::getAP() const {
    return (apcost);
}

std::ostream &operator<<(std::ostream &o, Character const &c) {
    if (c.getWeaponName() != "nothing")
        return  (o << c.getName() << " has " << c.getAP() << " and wields a " << c.getWeaponName() << std::endl);
    else
        return  (o << c.getName() << " has " << c.getAP() << " and is unarmed" << std::endl);
}
