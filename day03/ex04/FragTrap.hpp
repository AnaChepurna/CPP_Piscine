#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
protected:
	static const int		_max_hit_points = 100;
	static const int		_max_energy_points = 100;
	static const int		_level = 1;
	static const int		_melee_attack_damage = 30;
	static const int		_ranged_attack_damage = 20;
	static const int		_armor_damage_reduction = 5;

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