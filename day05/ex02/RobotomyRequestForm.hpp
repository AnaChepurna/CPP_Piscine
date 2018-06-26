//
// Created by Anastasia CHEPURNA on 25.06.2018.
//

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP


#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class RobotomyRequestForm: public Form {
private:
    static const int _signGrade = 72;
    static const int _execGrade = 45;
    std::string target;
    static const std::string _name;

    RobotomyRequestForm();
public:
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(RobotomyRequestForm const & src);
    using Form::operator=;
    virtual ~RobotomyRequestForm();

    virtual void execute(Bureaucrat const & executor) const;
};


#endif
