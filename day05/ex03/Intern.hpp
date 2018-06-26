//
// Created by Anastasia CHEPURNA on 25.06.2018.
//

#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>

class Form;

class Intern {
public:
    Intern(void);
    Intern(Intern const & src);
    ~Intern(void);
    Intern & operator=( Intern const &);

    Form * makeForm(std::string form, std::string target);
};


#endif
