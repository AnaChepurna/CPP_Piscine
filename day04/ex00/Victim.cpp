#include "Victim.hpp"

Victim::Victim(void)
{}

Victim::Victim(std::string const name):
name(name)
{
	std::cout << "Some random victim called " << name << " just popped !" << std::endl;
}

Victim::Victim(Victim const & src)
{
	*this = src;
	std::cout << "Some random victim called " << name << " just popped !" << std::endl;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << name << " just died for no apparent reason !" << std::endl;
}

Victim & Victim::operator=(Victim const & src)
{
	this->name = src.name;
	return (*this);
}

std::ostream &	operator<<(std::ostream & o, Victim const & s)
{
	return (o << "I am " << s.getName() << " and I like otters !" << std::endl);
}

std::string Victim::getName(void) const
{
	return (name);
}

void Victim::getPolymorphed(void) const
{
	std::cout << name << " has been turned into a cute little sheep !" << std::endl;
}