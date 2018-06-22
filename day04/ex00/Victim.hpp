#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class Victim {

protected:
	std::string name;

	Victim(void);	

public:
    Victim(std::string const name);
	Victim(Victim const & src);
    ~Victim(void);
    std::string getName(void) const;
    Victim &  operator=(Victim const & src);
    virtual void getPolymorphed(void) const;
};

std::ostream &	operator<<(std::ostream & o, Victim const & s);

#endif