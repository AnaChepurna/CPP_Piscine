//
// Created by Anastasia CHEPURNA on 25.06.2018.
//

#include "PresidentialPardonForm.hpp"

const std::string PresidentialPardonForm::_name = "Presidential Pardon Form";

PresidentialPardonForm::PresidentialPardonForm(): Form(_name, _signGrade, _execGrade) {
    target = "";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form(_name, _signGrade, _execGrade) {
    this->setTarget(target);
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src): Form(src.getName(), src.getSignGrade(), src.getExecGrade()) {
    this->target = src.target;
}

//PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &src) {
//    this->target = src.target;
//    return (*this);
//}

PresidentialPardonForm::~PresidentialPardonForm() {
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
    if (this->getSigned())
        std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    else if (executor.getGrade() > this->getExecGrade())
        throw Form::GradeTooLowException();
    else
        throw Form::IsNotSignedException();
}