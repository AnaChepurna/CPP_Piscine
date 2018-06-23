//
// Created by Anastasia CHEPURNA on 6/23/18.
//

#include "Character.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

int main() {
    Character* zaz = new Character("zaz");
    (void)zaz;
    std::cout << *zaz;
    Enemy* b = new RadScorpion();
    (void)b;
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    zaz->equip(pr);
    std::cout << *zaz;
    zaz->equip(pf);
    zaz->attack(b);
    std::cout << *zaz;
    zaz->equip(pr);
    std::cout << *zaz;
    zaz->attack(b);
    std::cout << *zaz;
    zaz->attack(b);
    std::cout << *zaz;
    return 0; }