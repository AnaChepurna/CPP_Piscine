#ifndef ZOMBIE_HORDE_HPP
#define ZOMBIE_HORDE_HPP

#include "Zombie.hpp"

class ZombieHorde
{
private:
	Zombie 	*horde;

public:
	ZombieHorde(int n);
	~ZombieHorde(void);
	void	announce(void);
};

#endif