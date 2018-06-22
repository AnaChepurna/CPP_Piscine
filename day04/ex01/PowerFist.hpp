//
// Created by Anastasia CHEPURNA on 22.06.2018.
//

#ifndef POWERFIST_HPP
#define POWERFIST_HPP


#include "AWeapon.hpp"

class PowerFist: public AWeapon {
protected:
    static std::string const _name = "Power Fist";
    static int const _damage = 50;
    static int const _apcost = 8;
public:
    PowerFist();
    virtual ~PowerFist();
    PowerFist(PowerFist &const src);
    PowerFist &  operator=(PowerFist const & src);
    virtual void attack() const;
};


#endif
