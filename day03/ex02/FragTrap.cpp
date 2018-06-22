#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap()
{
	hit_points = 100;
	max_hit_points = 100;
	energy_points = 100;
	max_energy_points = 100;
	level = 1;
	name = "John";
	melee_attack_damage = 30;
	ranged_attack_damage = 20;
	armor_damage_reduction = 5;
	std::cout << "Some FragTrap John is here" << std::endl;
}

FragTrap::FragTrap(std::string const name): ClapTrap()
 {
 	hit_points = 100;
	max_hit_points = 100;
	energy_points = 100;
	max_energy_points = 100;
	level = 1;
	this->name = name;
	melee_attack_damage = 30;
	ranged_attack_damage = 20;
	armor_damage_reduction = 5;
 	std::cout << "Some FragTrap " << name << " is here" << std::endl;
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

FragTrap & FragTrap::operator=(FragTrap const & src)
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