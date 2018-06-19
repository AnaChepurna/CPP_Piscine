#include "ZombieEvent.hpp"

void		ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie		*ZombieEvent::newZombie(std::string name)
{
	Zombie *zombie = new Zombie(type, name);
	return (zombie);
}

std::string	ZombieEvent::randomName(void)
{
	static std::string names[] = {"John", "Mary", "Kate", "Andrew", "Lloyd",
	"James", "Elle", "Sonya", "Elvis", "Bobby", "Link"};
	srand(time(NULL));
	return (names[rand() % 10]);
}

void		ZombieEvent::randomChump(void)
{
	Zombie zombie = Zombie(type, randomName());
	zombie.announce();
}