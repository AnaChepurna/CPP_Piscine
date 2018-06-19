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
	static std::string names[] = {"John", "Mary", "Kate", "Andrew", "Lloyd", "James", "Elle"};
	srand(time(NULL));
	Zombie zombie = Zombie(type, names[rand() % 7]);
	zombie.announce();
}