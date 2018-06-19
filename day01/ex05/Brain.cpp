#include "Brain.hpp"

Brain::Brain(void):
folly(getCharacter()), imagination(getCharacter())
{
	std::cout << "Brain is working." << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain is dead." << std::endl;
}

int 	Brain::getCharacter(void)
{
	static int n = 0;
	if (!n++)
		srand(time(0));
	return (rand() % 10);
}

std::string Brain::identify(void) const
{
	std::stringstream address;
	address << this;
	return (address.str());
}

void Brain::brainInfo(void) const
{
	std::cout << "folly for " << folly
	<< ", creative for " << imagination << "." << std::endl;
}
