//
// Created by Anastasia CHEPURNA on 6/23/18.
//

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "ICharacter.hpp"
#include <iostream>

class AMateria
{
private:
    std::string		type;
    unsigned int 	xp;

public:

    AMateria(void);
    AMateria(std::string const & type);
    AMateria(AMateria const & cpy);
    virtual ~AMateria();

    virtual AMateria &	operator=(AMateria const & rhs);

    std::string const &	getType() const;
    unsigned int		getXP() const;
    void				setXP();

    virtual AMateria*	clone() const = 0;
    virtual void		use(ICharacter& target);
};

#endif
