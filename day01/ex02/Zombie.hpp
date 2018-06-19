#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <cstdlib>
#include <time.h>

class Zombie
{
private:
	std::string name;
	std::string type;

public:
	Zombie(std::string type, std::string name);
	Zombie(void);
	~Zombie(void);
	void	announce(void);

	static std::string	randomName(void);
};

#endif