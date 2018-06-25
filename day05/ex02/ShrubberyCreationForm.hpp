//
// Created by Anastasia CHEPURNA on 25.06.2018.
//

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP


#include "Form.hpp"

class ShrubberyCreationForm: public Form {
private:
    static const int _signGrade = 145;
    static const int _execGrade = 137;
    static const std::string _name;

    ShrubberyCreationForm();
public:
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm const & src);
    using Form::operator=;
    ~ShrubberyCreationForm();

    virtual void execute(Bureaucrat const & executor) const;
};

#endif
