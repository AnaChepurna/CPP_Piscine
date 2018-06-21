#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <cstdlib>
#include <time>

class FragTrap {

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
	FragTrap(void);
    FragTrap(std::string const name);
	FragTrap(FragTrap const & src);
    ~FragTrap(void);

    void	setName(std::string const name);
	std::string		getName(void) const;

	FragTrap &	operator=(FragTrap const &);
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	vaulthunter_dot_exe(std::string const & target);
};

#endif