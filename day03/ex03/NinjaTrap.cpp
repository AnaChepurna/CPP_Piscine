#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void): ClapTrap()
{
	hit_points = 60;
	max_hit_points = 60;
	energy_points = 120;
	max_energy_points = 120;
	level = 1;
	name = "John";
	melee_attack_damage = 60;
	ranged_attack_damage = 5;
	armor_damage_reduction = 0;
	std::cout << "Some Ninja Trap John is here" << std::endl;
}

NinjaTrap::NinjaTrap(std::string const name): ClapTrap()
 {
 	hit_points = 60;
	max_hit_points = 60;
	energy_points = 120;
	max_energy_points = 120;
	level = 1;
	this->name = name;
	melee_attack_damage = 60;
	ranged_attack_damage = 5;
	armor_damage_reduction = 0;
 	std::cout << "Some NinjaTrap " << name << " is here" << std::endl;
 }

NinjaTrap::NinjaTrap(NinjaTrap const & src): ClapTrap(src)
{
	std::cout << "NinjaTrap is copy of " << src.name << " now" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "NinjaTrap " << name << " is dead" << std::endl;
}

int		NinjaTrap::rangedAttack(std::string const & target)
{
	std::cout << "NinjaTrap " << name << " attacks " << target
	<< " at range, causing " << ranged_attack_damage << " points of damage !" << std::endl;
	return (ranged_attack_damage);
}

int		NinjaTrap::meleeAttack(std::string const & target) {

	std::cout << "NinjaTrap " << name << " attacks " << target
	<< " at melee, causing " << melee_attack_damage << " points of damage !" << std::endl;
	return (melee_attack_damage);
}

int		NinjaTrap::ninjaShoebox(NinjaTrap & target)
{
	if (energy_points >= 25)
	{
		energy_points -= 25;
		std::cout << "NinjaTrap " << name << 
		" used AntiNinjaTrap attack on " << target.getName() << std::endl;
		return (25);
	}
	else
	{
		std::cout << "NinjaTrap " << name << " has no energy" << std::endl;
		return (0);
	}
}

int		NinjaTrap::ninjaShoebox(FragTrap & target)
{
	if (energy_points >= 25)
	{
		energy_points -= 25;
		std::cout << "NinjaTrap " << name << 
		" used AntiFragTrap attack on " << target.getName() << std::endl;
		return (25);
	}
	else
	{
		std::cout << "NinjaTrap " << name << " has no energy" << std::endl;
		return (0);
	}
}

int		NinjaTrap::ninjaShoebox(ScavTrap & target)
{
	if (energy_points >= 25)
	{
		energy_points -= 25;
		std::cout << "NinjaTrap " << name << 
		" used AntiScavTrap attack on " << target.getName() << std::endl;
		return (25);
	}
	else
	{
		std::cout << "NinjaTrap " << name << " has no energy" << std::endl;
		return (0);
	}
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const & src)
{
	*this = src;
}