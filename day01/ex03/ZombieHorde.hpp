#ifndef ZOMBIE_HORDE_HPP
#define ZOMBIE_HORDE_HPP

#include "Zombie.hpp"

class ZombieHorde
{
private:
	Zombie 	*horde;
	int		number;

public:
	ZombieHorde(int number);
	~ZombieHorde(void);
	void	announce(void);
};

#endif