#include "Peon.hpp"

Peon::Peon(void)
{}

Peon::Peon(std::string const name):
Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const & src)
{
	*this = src;
	std::cout << "Zog zog." << std::endl;

}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;

}

Peon & Peon::operator=(Peon const & src)
{
	this->name = src.name;
	return (*this);
}

std::ostream &	operator<<(std::ostream & o, Peon const & s)
{
	return (o << "I am " << s.getName() << " and I like otters !" << std::endl);
}

void Peon::getPolymorphed(void) const
{
	std::cout << name << " has been turned into a pink pony !" << std::endl;
}