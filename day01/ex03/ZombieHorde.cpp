#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int number)
{
	this->number = number;
	horde = new Zombie[number];
}

ZombieHorde::~ZombieHorde(void)
{
	delete [] horde;
}

void	ZombieHorde::announce(void)
{
	int i = -1;
	while (++i < number)
		horde[i].announce();
}
