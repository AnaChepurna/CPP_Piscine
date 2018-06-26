//
// Created by Anastasia CHEPURNA on 25.06.2018.
//

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

#include <iostream>
#include "Form.hpp"

int main( void ) {

    Bureaucrat boss = Bureaucrat("Boss", 1);
    std::cout << boss;
    Bureaucrat jerk = Bureaucrat("Jerk", 150);
    std::cout << jerk;
    Intern intern;

    Form * form1 = intern.makeForm("presidential pardon", "Pony");
    std::cout << *form1;
    Form * form2 = intern.makeForm("shrubbery creation", "Park");
    std::cout << *form2;
    Form * form3 = intern.makeForm("robotomy request", "School");
    std::cout << *form3;

    try {
        form1->execute(jerk);
    }
    catch (Form::GradeTooLowException e) {
        std::cout << e.what() << std::endl;
    }
    catch (Form::IsNotSignedException e) {
        std::cout << e.what() << std::endl;
    }

    try {
        std::cout  << "Form1 to Boss" << std::endl;
        std::cout << *form1;
        form1->beSigned(boss);
        std::cout << *form1;
    }
    catch (Form::GradeTooHighException e) {
        std::cout << e.what() << std::endl;
    }
    try {
        form1->execute(jerk);
    }
    catch (Form::GradeTooLowException e) {
        std::cout << e.what() << std::endl;
    }
    catch (Form::IsNotSignedException e) {
        std::cout << e.what() << std::endl;
    }

    form2->beSigned(boss);
    form3->beSigned(boss);
    try {
        form2->execute(boss);
    }
    catch (Form::IsNotSignedException e) {
        std::cout << e.what() << std::endl;
    }
    catch (Form::GradeTooHighException e){
        std::cout << e.what() << std::endl;
    }

    std::cout << *form2;
    try {
        form2->execute(boss);
    }
    catch (Form::IsNotSignedException e) {
        std::cout << e.what() << std::endl;
    }
    catch (Form::GradeTooLowException e){
        std::cout << e.what() << std::endl;
    }

    try {
        form3->execute(boss);
    }
    catch (Form::IsNotSignedException e) {
        std::cout << e.what() << std::endl;
    }
    catch (Form::GradeTooLowException e) {
        std::cout << e.what() << std::endl;
    }
//    delete form1;
//    delete form2;
//    delete form3;

    return (0);
}