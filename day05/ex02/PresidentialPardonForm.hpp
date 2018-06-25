//
// Created by Anastasia CHEPURNA on 25.06.2018.
//

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP


#include <string>
#include "Form.hpp"

class PresidentialPardonForm: public Form {
private:
    static const int _signGrade = 72;
    static const int _execGrade = 45;
    std::string target;
    static const std::string _name;

    PresidentialPardonForm();
public:
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(PresidentialPardonForm const & src);
    using Form::operator=;
    ~PresidentialPardonForm();

    virtual void execute(Bureaucrat const & executor) const;
};


#endif
