#include "ZombieEvent.hpp"

int main(void)
{
	ZombieEvent event;
	event.setZombieType("Infected");
	Zombie *zombie1 = event.newZombie("Tom");
	event.randomChump();
	zombie1->announce();
	delete zombie1;
	return 0;
}