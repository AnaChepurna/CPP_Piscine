//
// Created by Anastasia CHEPURNA on 22.06.2018.
//

#include "AWeapon.hpp"

AWeapon::AWeapon()
{}

AWeapon::AWeapon(std::string const &name, int apcost, int damage):
name(name), apcost(apcost), damage(damage)
{}

AWeapon::AWeapon(const AWeapon &src) {
    *this = src;
}

AWeapon::~AWeapon() {
}

AWeapon &AWeapon::operator=(AWeapon const &src)
{
    this->name = src.name;
    this->apcost = src.apcost;
    this->damage = src.damage;
    return (*this);
}

int AWeapon::getDamage() const {
    return (damage);
}

int AWeapon::getAPCost() const {
    return (apcost);
}

void AWeapon::attack() const {

}

std::string const AWeapon::getName() const {
    return (name);
}

