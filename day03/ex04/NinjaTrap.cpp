#include "NinjaTrap.hpp"

int		NinjaTrap::_max_hit_points = 60;
int		NinjaTrap::_max_energy_points = 120;
int 	NinjaTrap::_level = 1;
int 	NinjaTrap::_melee_attack_damage = 60;
int		NinjaTrap::_ranged_attack_damage = 5;
int		NinjaTrap::_armor_damage_reduction = 0;


NinjaTrap::NinjaTrap(void): ClapTrap()
{
	hit_points = _max_hit_points;
	max_hit_points = _max_hit_points;
	energy_points = _max_energy_points;
	max_energy_points = _max_energy_points;
	level = _level;
	name = "John";
	melee_attack_damage = _melee_attack_damage;
	ranged_attack_damage = _ranged_attack_damage;
	armor_damage_reduction = _armor_damage_reduction;
	std::cout << "Some NinjaTrap John is here" << std::endl;
}

NinjaTrap::NinjaTrap(std::string const name): ClapTrap()
 {
	hit_points = _max_hit_points;
	max_hit_points = _max_hit_points;
	energy_points = _max_energy_points;
	max_energy_points = _max_energy_points;
	level = 1;
	this->name = name;
	melee_attack_damage = _melee_attack_damage;
	ranged_attack_damage = _ranged_attack_damage;
	armor_damage_reduction = _armor_damage_reduction;
 	std::cout << "Some NinjaTrap " << name << " is here" << std::endl;

 	// std::cout << "hit_points" << "=" <<  hit_points << std::endl;
 	// std::cout << "max_hit_points" << "=" <<  max_hit_points << std::endl;
 	// std::cout << "energy_points" << "=" << energy_points << std::endl;
 	// std::cout << "max_energy_points" << "=" <<  max_energy_points << std::endl;
 	// std::cout << "level" << "=" <<  level << std::endl;
 	// std::cout << "name" << "=" <<  name << std::endl;
 	// std::cout << "melee_attack_damage" << "=" << melee_attack_damage << std::endl;
 	// std::cout << "ranged_attack_damage" << "=" << ranged_attack_damage << std::endl;
 	// std::cout << "armor_damage_reduction" << "=" << armor_damage_reduction << std::endl;
 
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
	std::cout << "Copying robot from " << src.name << std::endl;
	hit_points = src.hit_points;
	max_hit_points = src.hit_points;
	energy_points = src.energy_points;
	max_energy_points = src.max_energy_points;
	level = src.level;
	name = src.name;
	melee_attack_damage = src.melee_attack_damage;
	ranged_attack_damage = src.ranged_attack_damage;
	armor_damage_reduction = src.armor_damage_reduction;
	return (*this);
}