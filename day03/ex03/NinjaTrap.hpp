#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{

public:
	NinjaTrap(void);
    NinjaTrap(std::string const name);
	NinjaTrap(NinjaTrap const & src);
    ~NinjaTrap(void);
    NinjaTrap & operator=(NinjaTrap const & src);

	int		rangedAttack(std::string const & target);
	int		meleeAttack(std::string const & target);
	int		ninjaShoebox(NinjaTrap & target);
	int		ninjaShoebox(FragTrap & target);
	int		ninjaShoebox(ScavTrap & target);
};

#endif