#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <cstdlib>
#include <time.h>

class ClapTrap {

protected:
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
	ClapTrap(void);
    ClapTrap(std::string const name);
	ClapTrap(ClapTrap const & src);
    ~ClapTrap(void);

    void	setName(std::string const name);
	std::string		getName(void) const;

	ClapTrap &	operator=(ClapTrap const &);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif