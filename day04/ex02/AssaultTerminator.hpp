//
// Created by Anastasia CHEPURNA on 6/23/18.
//

#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP


#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{

public:
    AssaultTerminator( void );
    AssaultTerminator( AssaultTerminator const & src );
    virtual ~AssaultTerminator( void );
    virtual void	battleCry() const;
    virtual void	rangedAttack() const;
    virtual void	meleeAttack() const;
    virtual ISpaceMarine* clone( void ) const;

    AssaultTerminator& operator=(AssaultTerminator const & rhs);
};


#endif
