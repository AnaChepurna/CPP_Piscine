#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public virtual ClapTrap
{
protected:
	static int		_max_hit_points;
	static int		_max_energy_points;
	static int		_level;
	static int		_melee_attack_damage;
	static int		_ranged_attack_damage;
	static int		_armor_damage_reduction;

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