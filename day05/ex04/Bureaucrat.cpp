//
// Created by Anastasia CHEPURNA on 25.06.2018.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("default"), grade(150) {
}

Bureaucrat::Bureaucrat(std::string name, int grade): name(name) {
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src): name(src.name) {
    *this = src;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &src) {
    this->grade = src.grade;
    return (*this);
}

Bureaucrat::~Bureaucrat() {
}

std::string const Bureaucrat::getName() const {
    return (name);
}

int Bureaucrat::getGrade() const {
    return (grade);
}

void Bureaucrat::operator+=(int const num) {
    if (grade -num < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        grade -= num;
}

void Bureaucrat::operator-=(int const num) {
    if (grade +num > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        grade += num;
}

Bureaucrat &Bureaucrat::operator++(void) {
    if (grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        grade--;
    return (*this);
}

Bureaucrat Bureaucrat::operator++(int) {
    Bureaucrat a = *this;
    if (grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        grade--;
    return (a);
}

Bureaucrat &Bureaucrat::operator--(void) {
    if (grade + 1 < 150)
        throw Bureaucrat::GradeTooLowException();
    else
        grade++;
    return (*this);
}

Bureaucrat Bureaucrat::operator--(int) {
    Bureaucrat a = *this;
    if (grade + 1 < 150)
        throw Bureaucrat::GradeTooLowException();
    else
        grade++;
    return (a);
}


Bureaucrat::GradeTooHighException::GradeTooHighException() {
}

Bureaucrat::GradeTooHighException::GradeTooHighException(const Bureaucrat::GradeTooHighException &src) {
    *this = src;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {
}

Bureaucrat::GradeTooHighException &
Bureaucrat::GradeTooHighException::operator=(const Bureaucrat::GradeTooHighException &src) {
    (void)src;
    return (*this);
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return ("Error : Bureaucrat grade set too high");
}

Bureaucrat::GradeTooLowException::GradeTooLowException() {

}

Bureaucrat::GradeTooLowException::GradeTooLowException(const Bureaucrat::GradeTooLowException &src) {
    *this = src;

}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {

}

Bureaucrat::GradeTooLowException &
Bureaucrat::GradeTooLowException::operator=(const Bureaucrat::GradeTooLowException &src) {
    (void)src;
    return (*this);
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return ("Error : Bureaucrat grade set too low");
}

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & src) {

    o << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
    return o;
}