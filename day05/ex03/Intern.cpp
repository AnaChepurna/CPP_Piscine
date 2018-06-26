//
// Created by Anastasia CHEPURNA on 25.06.2018.
//

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern( void ) {}

Intern::Intern( Intern const & src )
{
    *this = src;
}

Intern & Intern::operator=( Intern const &)
{
    return *this;
}

Intern::~Intern( void ) {}

Form * Intern::makeForm(std::string form, std::string target)
{
    if (form == "shrubbery creation")
    {
        std::cout << "Intern created " << form << " Form" << std::endl;
        return (new ShrubberyCreationForm(target));
    }
    else if (form == "robotomy request")
    {
        std::cout << "Intern created " << form << " Form" << std::endl;
        return (new RobotomyRequestForm(target));
    }
    else if (form == "presidential pardon")
    {
        std::cout << "Intern created " << form << " Form" << std::endl;
        return (new PresidentialPardonForm(target));
    }
    std::cout << "Requested form unknown." << std::endl;
    return (NULL);
}