#include "Zombie.hpp"

Zombie::Zombie(std::string type, std::string name)
{
	this->type = type;
	this->name = name;
	std::cout << "Zombie " << name << " is appeared." << std::endl;
}

Zombie::Zombie(void)
{
	std::cout << "Zombie is appeared." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << name << " is dead." << std::endl;
}

void Zombie::announce(void)
{

	std::cout << "<";
	if (name != "")
		std::cout << name;
	else
		std::cout << "zombie";
	if (type != "")
		std::cout << " (" << type << ")";
	std::cout << ">  Braiiiiiiinnnssss..." << std::endl;
}