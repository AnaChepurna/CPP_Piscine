#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer {

private:
	std::string name;
	std::string title;

	Sorcerer(void);	

public:
    Sorcerer(std::string const name, std::string const title);
	Sorcerer(Sorcerer const & src);
    ~Sorcerer(void);
    std::string getName(void) const;
    std::string getTitle(void) const;
    Sorcerer &  operator=(Sorcerer const & src);
    void polymorph(Victim & victim);
};

std::ostream &	operator<<(std::ostream & o, Sorcerer const & s);

#endif