//
// Created by Anastasia CHEPURNA on 22.06.2018.
//

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>

class AWeapon {
protected:
    std::string name;
    int  apcost;
    int  damage;
public:
    AWeapon();
    virtual ~AWeapon();
    AWeapon(std::string const & name, int apcost, int damage);
    AWeapon &  operator=(AWeapon const & src);
    AWeapon(AWeapon const & src);
    //[...] ~AWeapon();
    //std::string getName() const;
    int getAPCost() const;
    int getDamage() const;
    virtual void attack() const = 0;
};


#endif
