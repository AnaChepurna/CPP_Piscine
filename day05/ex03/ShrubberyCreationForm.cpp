//
// Created by Anastasia CHEPURNA on 25.06.2018.
//

#include "ShrubberyCreationForm.hpp"
#include <sstream>
#include <fstream>

const std::string ShrubberyCreationForm::_name = "Shrubbery Creation Form";

ShrubberyCreationForm::ShrubberyCreationForm(): Form(_name, _signGrade, _execGrade) {
    setTarget("");
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form(_name, _signGrade, _execGrade) {
    this->setTarget(target);
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src): Form(src.getName(), src.getSignGrade(), src.getExecGrade()) {
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
    if (!this->getSigned())
        throw Form::IsNotSignedException();
    else if (executor.getGrade() > this->getExecGrade()) {
        throw Form::GradeTooLowException();
    }
    else {
        std::stringstream trees;
        trees << "  \\ \\|/ /       \\ \\|/ /       \\ \\|/ /  " << std::endl;
        trees << "_\\\\ \\|/ //_   _\\\\ \\|/ //_   _\\\\ \\|/ //_ " << std::endl;
        trees << " _\\\\=|=//_     _\\\\=|=//_     _\\\\=|=//_" << std::endl;
        trees << "    |||           |||           |||" << std::endl;
        trees << "    |||           |||           |||" << std::endl;
        std::ofstream o;
        //std::cout << getTarget() << std::cout;
        o.open(getTarget());
        if (o.is_open()) {
            o << trees.str();
           // o.close();
        }
    }
}
