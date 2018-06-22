#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

public:
	ScavTrap(void);
    ScavTrap(std::string const name);
	ScavTrap(ScavTrap const & src);
    ~ScavTrap(void);

	int		rangedAttack(std::string const & target);
	int		meleeAttack(std::string const & target);
	void	challengeNewcomer();
};

#endif