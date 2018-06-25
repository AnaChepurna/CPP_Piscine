//
// Created by Anastasia CHEPURNA on 25.06.2018.
//

#include "RobotomyRequestForm.hpp"

const std::string RobotomyRequestForm::_name = "Robotomy Request Form";

RobotomyRequestForm::RobotomyRequestForm(): Form(_name, _signGrade, _execGrade) {
    this->setTarget("");
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form(_name, _signGrade, _execGrade) {
    this->setTarget(target);
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src): Form(src.getName(), src.getSignGrade(), src.getExecGrade()) {
    this->setTarget(src.target);
}

//RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &src) {
//    this->setTarget(src.target);
//    return (*this);
//}

RobotomyRequestForm::~RobotomyRequestForm() {
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
    static int n = 0;
    if (!n)
    {
        srand(time(0));
        n++;
    }
    if (!this->getSigned())
        throw Form::IsNotSignedException();
    else if (executor.getGrade() > this->getExecGrade())
        throw Form::GradeTooLowException();
    else {
        std::cout << " * DRILLING NOUSE * " << std::endl;
        if (rand()%2 == 0)
            std::cout << this->getTarget() << " has been robotomized successfully 50%" << std::endl;
        else
            std::cout << this->getTarget() << " robotomizing failed" << std::endl;
    }
}