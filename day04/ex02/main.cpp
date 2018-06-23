//
// Created by Anastasia CHEPURNA on 6/23/18.
//

#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include "Squad.hpp"

int main() {
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;
    ISpaceMarine* jim2 = new AssaultTerminator;
    ISpaceMarine* bob2 = new TacticalMarine;
    ISquad* vlc = new Squad;
    vlc->push(bob);
    vlc->push(jim);
    vlc->push(bob2);
    vlc->push(jim2);
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine* cur = vlc->getUnit(i);
       // std::cout << cur << std::endl;
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    delete vlc;
    return 0; }