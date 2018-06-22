#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap()
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
	std::cout << "Some FragTrap John is here" << std::endl;
}

FragTrap::FragTrap(std::string const name): ClapTrap()
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
 	std::cout << "Some FragTrap " << name << " is here" << std::endl;

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

FragTrap::FragTrap(FragTrap const & src): ClapTrap(src)
{
	std::cout << "Robot is copy of " << src.name << " now" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << " is dead" << std::endl;
}

int		FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << name << " attacks " << target
	<< " at range, causing " << ranged_attack_damage << " points of damage !" << std::endl;
	return (ranged_attack_damage);
}

int		FragTrap::meleeAttack(std::string const & target) {

	std::cout << "FR4G-TP " << name << " attacks " << target
	<< " at melee, causing " << melee_attack_damage << " points of damage !" << std::endl;
	return (melee_attack_damage);
}

int    FragTrap::vaulthunter_dot_exe(std::string const & target) {

	static std::string		random_attack[] = {"Usual Attack", "Common Punches",
	"Common Blow", "Normal Punch", "Sweet Candies", "Hare`s Tail", "Robobobo", "Secret Charm"};
	static int n = 0;

	if (!n++)
		srand(time(0));
	if (energy_points >= 25)
	{
		energy_points -= 25;
		std::cout << "FR4G-TP " << name << " attack " << target << " uses " << random_attack[(rand() % 8)] << std::endl;
		return (25);
	}
	else
		std::cout << "FR4G-TP " << name << " has no energy" << std::endl;
	return (0);
}