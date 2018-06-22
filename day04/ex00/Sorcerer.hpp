#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>

class Sorcerer {

private:
	std::string name;
	std::string title;

	ClapTrap(void);	

public:
    ClapTrap(std::string const name);
	ClapTrap(ClapTrap const & src);
    ~ClapTrap(void);
    std::string getName(void);
    std::string getTitle(void);
    ClapTrap &  ClapTrap::operator=(ClapTrap const & src);
};

#endif