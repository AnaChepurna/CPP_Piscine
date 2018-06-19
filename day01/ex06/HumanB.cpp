#include "HumanB.hpp"

HumanB::HumanB(std::string name):
name(name)
{}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void	HumanB::attack(void)
{
	std::cout << name << " attack with his "
	<< weapon->getType() << "." << std::endl;
}