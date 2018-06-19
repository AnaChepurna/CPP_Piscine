#ifndef ZOMBIE_EVENT_HPP
#define ZOMBIE_EVENT_HPP

#include "Zombie.hpp"
#include <cstdlib>
#include <time.h>

class ZombieEvent
{
private:
	std::string type;

	std::string		randomName(void);
public:
	void 	setZombieType(std::string type);
	Zombie *newZombie(std::string name);
	void	randomChump(void);
};

#endif