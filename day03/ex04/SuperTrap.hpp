#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{

public:
	SuperTrap(void);
    SuperTrap(std::string const name);
	SuperTrap(SuperTrap const & src);
    ~SuperTrap(void);
    SuperTrap & operator=(SuperTrap const & src);

	int		rangedAttack(std::string const & target);
	int		meleeAttack(std::string const & target);
};

#endif