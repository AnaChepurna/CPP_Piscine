//
// Created by Anastasia CHEPURNA on 22.06.2018.
//

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>

class AWeapon {
private:
    std::string name;
    int  apcost;
    int  damage;
    AWeapon();

public:
    virtual ~AWeapon();
    AWeapon(std::string const & name, int apcost, int damage);
    AWeapon &  operator=(AWeapon const & src);
    AWeapon(AWeapon const & src);
    std::string const getName() const;
    int getAPCost() const;
    int getDamage() const;
    virtual void attack() const;
};


#endif
