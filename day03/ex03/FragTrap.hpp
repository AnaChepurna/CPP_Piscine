#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

public:
	FragTrap(void);
    FragTrap(std::string const name);
	FragTrap(FragTrap const & src);
    ~FragTrap(void);
    FragTrap & operator=(FragTrap const & src);

	int		rangedAttack(std::string const & target);
	int		meleeAttack(std::string const & target);
	int		vaulthunter_dot_exe(std::string const & target);
};

#endif