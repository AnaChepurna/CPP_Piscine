#include "Human.hpp"

Human::Human(void)
{
	std::cout << "Human was born." << std::endl;
}

Human::~Human(void)
{
	std::cout << "Human is dead." << std::endl;
}

Brain const	&Human::getBrain(void)
{
	return (brain);
}

std::string Human::identify(void)
{
	return (brain.identify());
}