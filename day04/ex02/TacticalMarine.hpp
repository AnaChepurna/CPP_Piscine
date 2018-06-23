//
// Created by Anastasia CHEPURNA on 6/23/18.
//

#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP


#include "ISpaceMarine.hpp"

class TacticalMarine: public ISpaceMarine {
public:
    TacticalMarine();
    TacticalMarine(TacticalMarine const& src);
    TacticalMarine &operator=(TacticalMarine const & src);
    virtual ~TacticalMarine();
    virtual ISpaceMarine *clone() const;
    virtual void battleCry() const;
    virtual void rangedAttack() const;
    virtual void meleeAttack() const;
};


#endif
