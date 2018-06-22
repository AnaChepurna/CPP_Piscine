#include "FragTrap.hpp"

FragTrap::FragTrap(void):
hit_points(100), max_hit_points(100), energy_points(100),
max_energy_points(100), level(1), name("John"), melee_attack_damage(30),
ranged_attack_damage(20), armor_damage_reduction(5)
{
	std::cout << "Some FragTrap John is here" << std::endl;
}

FragTrap::FragTrap(std::string const name):
 hit_points(100), max_hit_points(100), energy_points(100),
 max_energy_points(100), level(1), name(name), melee_attack_damage(30), 
 ranged_attack_damage(20), armor_damage_reduction(5)
 {
 	std::cout << "Some FragTrap " << name << " is here" << std::endl;
 }

FragTrap::FragTrap(FragTrap const & src)
{
	std::cout << "Hmmm... FragTrap" << name << " become copy of " << src.name << " now" << std::endl;
	*this = src;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << " is dead" << std::endl;
}

void	FragTrap::setName(std::string const name)
{
	std::cout << this->name << " desided to change name - " << name << std::endl;
	this->name = name;
}

std::string		FragTrap::getName(void) const
{
	return (name);
}

FragTrap &  FragTrap::operator=(FragTrap const & src)
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

void    FragTrap::takeDamage(unsigned int amount)
{
	amount -= armor_damage_reduction;
	if ((int)amount <= 0)
		std::cout << name << " does not feel anything!" << std::endl;
	else
	{
		if ((int)(hit_points - amount) <= 0)
		{
			std::cout << name << " is crying..." << std::endl;
			hit_points = 0;
		}
		else
			hit_points -= amount;
		std::cout << name << " take damage at " << amount << ". Now he has "
		<< hit_points << " HP" << std::endl;
	}
}

void	FragTrap::beRepaired(unsigned int amount)
{
	hit_points += amount;
	if (hit_points >= max_hit_points)
	{
		hit_points = max_hit_points;
		std::cout << name << " has full health!" << std::endl;
	}
	else
		std::cout << name << " repeared at " << amount << std::endl;
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
	}
	else
		std::cout << "FR4G-TP " << name << " has no energy" << std::endl;
	return (25);
}