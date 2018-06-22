#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
	hit_points = 100;
	max_hit_points = 100;
	energy_points = 50;
	max_energy_points = 50;
	level = 1;
	name = "John";
	melee_attack_damage = 20;
	ranged_attack_damage = 15;
	armor_damage_reduction = 3;
	std::cout << "Some ScavTrap John is here" << std::endl;
}

ScavTrap::ScavTrap(std::string const name): ClapTrap()
 {
 	hit_points = 100;
	max_hit_points = 100;
	energy_points = 50;
	max_energy_points = 50;
	level = 1;
	this->name = name;
	melee_attack_damage = 20;
	ranged_attack_damage = 15;
	armor_damage_reduction = 3;
 	std::cout << "Some ScavTrap " << name << " is here" << std::endl;
 }

ScavTrap::ScavTrap(ScavTrap const & src): ClapTrap(src)
{
	std::cout << "Hmmm... Robot is copy of " << src.name << " now" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name << " is dead" << std::endl;
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


ScavTrap & ScavTrap::operator=(ScavTrap const & src)
{
	*this = src;
}