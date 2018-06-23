//
// Created by Anastasia CHEPURNA on 22.06.2018.
//

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP


#include <string>
#include "AWeapon.hpp"

class PlasmaRifle: public AWeapon {
protected:
    static std::string const _name;// = "Plasma Rifle";
    static int const _damage = 21;
    static int const _apcost = 5;
public:
    PlasmaRifle();
    virtual ~PlasmaRifle();
    PlasmaRifle(PlasmaRifle const & src);
    PlasmaRifle &  operator=(PlasmaRifle const & src);
    virtual void attack() const;
};

#endif

