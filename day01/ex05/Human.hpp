#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"

class Human
{
private:
	Brain const brain;
	
public:
	Human(void);
	~Human(void);
	std::string identify(void);
	Brain const & getBrain(void);
};

#endif