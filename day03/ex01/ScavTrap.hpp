#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <cstdlib>
#include <time.h>

class ScavTrap {

private:
	int		hit_points;
	int		max_hit_points;
	int		energy_points;
	int		max_energy_points;
	int		level;
	std::string	name;
	int		melee_attack_damage;
	int		ranged_attack_damage;
	int		armor_damage_reduction;

public:
	ScavTrap(void);
    ScavTrap(std::string const name);
	ScavTrap(ScavTrap const & src);
    ~ScavTrap(void);

    void	setName(std::string const name);
	std::string		getName(void) const;

	ScavTrap &	operator=(ScavTrap const &);
	int		rangedAttack(std::string const & target);
	int		meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	challengeNewcomer();
};

#endif