//
// Created by Anastasia CHEPURNA on 25.06.2018.
//

#include "Form.hpp"
#include <iostream>

Form::Form(): name("default"),  sign(false), signGrade(6), execGrade(12) {}

Form::Form(std::string name, int sign, int exec): name(name), signGrade(sign), execGrade(exec) {

    if (sign > 150 || exec > 150)
        throw Form::GradeTooLowException();
    else if (sign < 1 || exec < 1)
        throw Form::GradeTooHighException();
    else
        this->sign = 0;
}

Form::Form(Form const & src): name(src.name), signGrade(src.signGrade), execGrade(src.execGrade) {

    *this = src;
}

Form::~Form() {}

Form &	Form::operator=(Form const & rhs) {

    this->sign = rhs.sign;
    return *this;
}

std::string		Form::getName() const {

    return (this->name);
}

bool	Form::getSigned() const {

    return (this->sign);
}

int		Form::getSignGrade() const {

    return (this->signGrade);
}

int		Form::getExecGrade() const {

    return (this->execGrade);
}

void	Form::setSigned() {

    this->sign= 1;
}

void	Form::beSigned(Bureaucrat & src) {

    if (src.getGrade() > this->signGrade)
    {
        throw Form::GradeTooLowException();
    }
    else if (this->sign == 1)
        std::cout << src.getName() << " cannot sign " << this->name << " because this is already signed" << std::endl;
    else
        std::cout << src.getName() << " signs " << this->name  << std::endl;
    this->setSigned();
}

std::ostream &	operator<<(std::ostream & o, Form const & src) {

    o << src.getName() << " is a Form: grade " << src.getSignGrade() << ", exec require : " << src.getExecGrade() << ", signed status : " << src.getSigned() << std::endl;
    return o;
}


Form::GradeTooHighException::GradeTooHighException() {}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const & src) {
    *this = src;
}

Form::GradeTooHighException::~GradeTooHighException() throw() {}

Form::GradeTooHighException &		Form::GradeTooHighException::operator=(GradeTooHighException const &) {
    return *this;
}

const char* Form::GradeTooHighException::what() const throw() {
    return ("Grade is too high");
}

Form::GradeTooLowException::GradeTooLowException() {}

Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const & src) {
    *this = src;
}

Form::GradeTooLowException::~GradeTooLowException() throw() {}

Form::GradeTooLowException &		Form::GradeTooLowException::operator=(GradeTooLowException const &) {
    return *this;
}

const char* Form::GradeTooLowException::what() const throw() {
    return ("Grade is too low");
}