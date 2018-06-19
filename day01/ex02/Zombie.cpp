#include "Zombie.hpp"

std::string	Zombie::randomName(void)
{
	static std::string names[] = {"John", "Mary", "Kate", "Andrew", "Lloyd",
	"James", "Elle", "Sonya", "Elvis", "Bobby", "Link"};
	srand(time(NULL));
	return (names[rand() % 10]);
}

Zombie::Zombie(std::string type, std::string name)
{
	this->type = type;
	this->name = name;
	std::cout << "Zombie " << name << " is appeared." << std::endl;
}

Zombie::Zombie(void)
{
	this->name = randomName();
	std::cout << "Zombie " << name << " is appeared." << std::endl;
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