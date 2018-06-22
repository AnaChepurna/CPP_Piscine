#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void)
{}

Sorcerer::Sorcerer(std::string const name, std::string const title):
name(name), title(title)
{
	std::cout << name << " , " << title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & src)
{
	*this = src;
	std::cout << name << " , " << title << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << name << " , " << title << ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer & Sorcerer::operator=(Sorcerer const & src)
{
	this->name = src.name;
	this->title = src.title;
	return (*this);
}

std::ostream &	operator<<(std::ostream & o, Sorcerer const & s)
{
	return (o << "I am " << s.getName() << " , " << s.getTitle() << ", and I like ponies !" << std::endl);
}

std::string Sorcerer::getName(void) const
{
	return (name);
}

std::string Sorcerer::getTitle(void) const
{
	return (title);
}

void Sorcerer::polymorph(Victim & victim)
{
	std::cout << victim;
	victim.getPolymorphed();
}