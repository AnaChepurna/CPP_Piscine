//
// Created by Anastasia CHEPURNA on 25.06.2018.
//

#include "Bureaucrat.hpp"

#include <iostream>
#include "Form.hpp"

int main( void ) {

    Bureaucrat boss = Bureaucrat("Boss", 1);
    std::cout << boss;
    Bureaucrat jerk = Bureaucrat("Jerk", 150);
    std::cout << jerk;

    Form form1 = Form("Ref1", 50, 50);

    try {
        std::cout  << "Form1 to Boss" << std::endl;
        std::cout << form1;
        form1.beSigned(boss);
        std::cout << form1;
    }
    catch (Form::GradeTooHighException e) {
        std::cout << e.what() << std::endl;
    }
    try {
        std::cout  << "Form1 to Boss one more time" << std::endl;
        std::cout << form1;
        form1.beSigned(boss);
        std::cout << form1;
    }
    catch (Form::GradeTooHighException e) {
        std::cout << e.what() << std::endl;
    }

    try {
        std::cout  << "Form1 to Jerk" << std::endl;
        std::cout << form1;
        form1.beSigned(jerk);
        std::cout << form1;
    }
    catch (Form::GradeTooLowException e) {
        std::cout << e.what() << std::endl;
    }

    return (0);
}