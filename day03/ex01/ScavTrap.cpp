#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void):
hit_points(100), max_hit_points(100), energy_points(50),
max_energy_points(50), level(1), name("John"), melee_attack_damage(20),
ranged_attack_damage(15), armor_damage_reduction(3)
{
	std::cout << "Some ScavTrap John is here" << std::endl;
}

ScavTrap::ScavTrap(std::string const name):
 hit_points(100), max_hit_points(100), energy_points(50),
 max_energy_points(50), level(1), name(name), melee_attack_damage(20), 
 ranged_attack_damage(15), armor_damage_reduction(3)
 {
 	std::cout << "Some ScavTrap " << name << " is here" << std::endl;
 }

ScavTrap::ScavTrap(ScavTrap const & src)
{
	std::cout << "Hmmm... ScavTrap " << name << " become copy of " << src.name << " now" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name << " is dead" << std::endl;
}

void	ScavTrap::setName(std::string const name)
{
	std::cout << this->name << " desided to change name - " << name << std::endl;
	this->name = name;
}

std::string		ScavTrap::getName(void) const
{
	return (name);
}

ScavTrap &  ScavTrap::operator=(ScavTrap const & src)
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

int		ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "ScavTrap " << name << " attacks " << target
	<< " at range, causing " << ranged_attack_damage << " points of damage !" << std::endl;
	return (ranged_attack_damage);
}

int		ScavTrap::meleeAttack(std::string const & target) {

	std::cout << "ScavTrap " << name << " attacks " << target
	<< " at melee, causing " << melee_attack_damage << " points of damage !" << std::endl;
	return (melee_attack_damage);
}

void    ScavTrap::takeDamage(unsigned int amount)
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

void	ScavTrap::beRepaired(unsigned int amount)
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

void	ScavTrap::challengeNewcomer()
{
	static std::string		random_challenge[] = {"100 Push-ups", "100 On The Press",
	"10 km Running", "Meditation", "Lick The Albow", "100 Jumping Jacks", "Get A Star",
	"Forge A Sword"};
	static int n = 0;

	if (!n++)
		srand(time(0));
	if (energy_points >= 25)
	{
		energy_points -= 25;
		std::cout << "ScavTrap " << name << " has challange " << random_challenge[(rand() % 8)] << std::endl;
	}
	else
		std::cout << "ScavTrap " << name << " has no energy" << std::endl;
}
