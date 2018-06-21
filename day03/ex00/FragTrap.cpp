#include "FragTrap.hpp"

FragTrap::FragTrap(void):
hit_points(100), max_hit_points(100), energy_points(100),
max_energy_points(100), level(1), name("John") melee_attack_damage(30),
ranged_attack_damage(20), armor_damage_reduction(5)
{
	std::cout << "Some John is here" << std::cout;
}

FragTrap::FragTrap(std::string const name):
 hit_points(100), _Max_hit_points(100), energy_points(100),
 max_energy_points(100), level(1), name(name), melee_attack_damage(30), 
 ranged_attack_damage(20), armor_damage_reduction(5)
 {
 	std::cout << "Some " << name << " is here" << std::cout;
 }

FragTrap::FragTrap(FragTrap const & src)
{
	std::cout << "Hmmm... " << name << " become copy of " << src.name << " now" << std::cout;
	*this = src;
}

FragTrap::~FragTrap()
{}

void	FragTrap::setName(std::string const name)
{
	std::cout << this->name << " desided to change name - " << name << std::cout;
	this->name = name;
}

std::string		FragTrap::getName(void) const
{
	return (this->_name);
}

FragTrap &  FragTrap::operator=(FragTrap const & src)
{
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

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << name << " attacks " << target
	<< " at range, causing " << ranged_attack_damage << " points of damage !" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target) {

	std::cout << "FR4G-TP " << name << " attacks " << target
	<< " at melee, causing " << melee_attack_damage << " points of damage !" << std::endl;
}

void    FragTrap::takeDamage(unsigned int amount)
{
	amount -= armor_damage_reduction;
	if (amount <= 0)
		std::cout << name " does not feel anything!" << std::cout;
	else if (hit_points - amount >= 0)
	{
		std::cout << name << " is crying..." << std::engl;
		hit_points = 0;
	}
	else
	{
		std::cout << name << " take damage at " << amount << std::endl;
		hit_points -= amount;
	}
}

void	FragTrap::beRepaired(unsigned int amount)
{
	hit_points += amount;
	if (hit_points >= max_hit_points)
	{
		hit_points = max_hit_points;
		std::cout << name " has full health!" << std::endl;
	}
	else
		std::cout << name " repeared at " << amount << std::endl;
}

void    FragTrap::vaulthunter_dot_exe(std::string const & target) {

	static std::string		random_attack[] = {"Common Attack", "Common Punches",
	"Common Blow", "Normal Punch"};
	static int n = 0;

	if (!n++)
		srand(time(0));
	if (energy_points >= 10)
	{
		energy_points -= 10;
		std::cout << "FR4G-TP " << this->_name << " uses " << random_attack[(rand() % 4)] << std::endl;
	}
	else
		std::cout << "FR4G-TP " << this->_name << " has no energy" << std::endl;
}