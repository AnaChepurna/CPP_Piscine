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

void		ZombieEvent::randomChump(void)
{
	Zombie zombie = Zombie(type, Zombie::randomName());
	zombie.announce();
}