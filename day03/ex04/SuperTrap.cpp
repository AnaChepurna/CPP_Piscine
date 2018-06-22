#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void): FragTrap(), NinjaTrap()
{
 	hit_points = FragTrap::_max_hit_points;
	max_hit_points = FragTrap::_max_hit_points;
	energy_points = NinjaTrap::_max_hit_points;
	max_hit_points = NinjaTrap::_max_hit_points;
	level = 1;
	name = "John";
	melee_attack_damage = NinjaTrap::_melee_attack_damage;
	ranged_attack_damage = FragTrap::_ranged_attack_damage;
	armor_damage_reduction = FragTrap::_armor_damage_reduction;
	std::cout << "Some SuperTrap John is here" << std::endl;
}

SuperTrap::SuperTrap(std::string const name): FragTrap(name), NinjaTrap(name)
 {
 	hit_points = FragTrap::_max_hit_points;
	max_hit_points = FragTrap::_max_hit_points;
	energy_points = NinjaTrap::_max_hit_points;
	max_hit_points = NinjaTrap::_max_hit_points;
	level = 1;
	this->name = name;
	melee_attack_damage = NinjaTrap::_melee_attack_damage;
	ranged_attack_damage = FragTrap::_ranged_attack_damage;
	armor_damage_reduction = FragTrap::_armor_damage_reduction;
 	std::cout << "Some SuperTrap " << name << " is here" << std::endl;
 	std::cout << "hit_points" << "=" <<  hit_points << std::endl;
 	std::cout << "max_hit_points" << "=" <<  max_hit_points << std::endl;
 	std::cout << "energy_points" << "=" << energy_points << std::endl;
 	std::cout << "max_energy_points" << "=" <<  max_energy_points << std::endl;
 	std::cout << "level" << "=" <<  level << std::endl;
 	std::cout << "name" << "=" <<  name << std::endl;
 	std::cout << "melee_attack_damage" << "=" << melee_attack_damage << std::endl;
 	std::cout << "ranged_attack_damage" << "=" << ranged_attack_damage << std::endl;
 	std::cout << "armor_damage_reduction" << "=" << armor_damage_reduction << std::endl;
 }

SuperTrap::SuperTrap(SuperTrap const & src): FragTrap(src), NinjaTrap()
{
	std::cout << "SuperTrap is copy of " << src.name << " now" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap " << name << " is dead" << std::endl;
}

int		SuperTrap::rangedAttack(std::string const & target)
{
	return(FragTrap::rangedAttack(target));
}

int		SuperTrap::meleeAttack(std::string const & target)
{
	return(NinjaTrap::meleeAttack(target));
}

SuperTrap & SuperTrap::operator=(SuperTrap const & src)
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
