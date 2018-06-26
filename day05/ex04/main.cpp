//
// Created by Anastasia CHEPURNA on 25.06.2018.
//

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"

#include <iostream>
#include "Form.hpp"

int main( void ) {
    OfficeBlock officeBlock;

    try {
        officeBlock.doBureaucracy("first", "Office");
    }
    catch (OfficeBlock::IncompleteOfficeException e) {
        std::cout << e.what() << std::endl;
    }
    catch (Form::GradeTooHighException e) {
        std::cout << e.what() << std::endl;
    }
    catch (Form::GradeTooLowException e) {
        std::cout << e.what() << std::endl;
    }
    catch (Form::IsNotSignedException e) {
        std::cout << e.what() << std::endl;
    }
    catch (Intern::NotExistingFormException e) {
        std::cout << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException & e) {
        std::cout << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException e) {
        std::cout << e.what() << std::endl;
    }
    catch (std::exception & e) {
        std::cout << "unexpected error cathed: " << e.what() << std::endl;
    }
    std::cout << std::endl << std::endl << std::endl;

    officeBlock.setIntern(new Intern());
    officeBlock.setExecutor(new Bureaucrat("Jack", 74));
    officeBlock.setSigner(new Bureaucrat("Alex", 85));

    try {
        officeBlock.doBureaucracy("haha", "hah");
    }
    catch (OfficeBlock::IncompleteOfficeException e) {
        std::cout << e.what() << std::endl;
    }
    catch (Form::GradeTooHighException e) {
        std::cout << e.what() << std::endl;
    }
    catch (Form::GradeTooLowException e) {
        std::cout << e.what() << std::endl;
    }
    catch (Form::IsNotSignedException e) {
        std::cout << e.what() << std::endl;
    }
    catch (Intern::NotExistingFormException e) {
        std::cout << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException & e) {
        std::cout << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException e) {
        std::cout << e.what() << std::endl;
    }
    catch (std::exception & e) {
        std::cout << "unexpected error cathed: " << e.what() << std::endl;
    }

    std::cout << std::endl << std::endl << std::endl;

    try {
        officeBlock.doBureaucracy("robotomy request", "School");
    }
    catch (OfficeBlock::IncompleteOfficeException & e) {
        std::cout << e.what() << std::endl;
    }
    catch (Form::GradeTooHighException & e) {
        std::cout << e.what() << std::endl;
    }
    catch (Form::GradeTooLowException & e) { ;
        std::cout << e.what() << std::endl;
    }
    catch (Form::IsNotSignedException & e) {
        std::cout << e.what() << std::endl;
    }
    catch (Intern::NotExistingFormException & e) {
        std::cout << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException & e) {
        std::cout << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException e) {
        std::cout << e.what() << std::endl;
    }
    catch (std::exception & e) {
        std::cout << "unexpected error cathed: " << e.what() << std::endl;
    }

    std::cout << std::endl << std::endl << std::endl;

    try {
        officeBlock.doBureaucracy("shrubbery creation", "Park");
    }
    catch (OfficeBlock::IncompleteOfficeException e) {
        std::cout << e.what() << std::endl;
    }
    catch (Form::GradeTooHighException e) {
        std::cout << e.what() << std::endl;
    }
    catch (Form::GradeTooLowException e) {
        std::cout << e.what() << std::endl;
    }
    catch (Form::IsNotSignedException e) {
        std::cout << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException & e) {
        std::cout << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException e) {
        std::cout << e.what() << std::endl;
    }
    catch (std::exception & e) {
        std::cout << "unexpected error cathed: " << e.what() << std::endl;
    }

}