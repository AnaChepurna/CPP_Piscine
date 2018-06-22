#ifndef PEON_HPP
# define PEON_HPP

#include "Victim.hpp"

class Peon: public Victim {

protected:

	Peon(void);	

public:
    Peon(std::string const name);
	Peon(Peon const & src);
    ~Peon(void);
    Peon &  operator=(Peon const & src);
    virtual void getPolymorphed(void) const;
};

std::ostream &	operator<<(std::ostream & o, Peon const & s);

#endif