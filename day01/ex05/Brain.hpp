#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <cstdlib>
#include <time.h>
#include <sstream>

class Brain
{
private:
	int 	folly;
	int		imagination;

	int 	getCharacter(void);

public:
	Brain(void);
	~Brain(void);
	std::string identify(void) const;
	void brainInfo(void) const;
};

#endif