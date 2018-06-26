//
// Created by Anastasia CHEPURNA on 26.06.2018.
//

#include "OfficeBlock.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

OfficeBlock::OfficeBlock(OfficeBlock const &src) {
    *this = src;
}

OfficeBlock &OfficeBlock::operator=(OfficeBlock const &src) {
    intern = src.intern;
    signer = src.signer;
    executor = src.executor;
    return (*this);
}

OfficeBlock::OfficeBlock() {
}

OfficeBlock::OfficeBlock(Intern *intern, Bureaucrat *signer, Bureaucrat *executor):
intern(intern), signer(signer), executor(executor) {
}

OfficeBlock::~OfficeBlock() {
    delete intern;
    delete signer;
    delete executor;
}

void OfficeBlock::setIntern(Intern *intern) {
    this->intern = intern;
}

void OfficeBlock::setSigner(Bureaucrat *signer) {
    this->signer = signer;
}

void OfficeBlock::setExecutor(Bureaucrat *executor) {
    this->executor = executor;
}

void OfficeBlock::doBureaucracy(std::string const formname, std::string const target) {
    std::cout << "Request : " << formname << " to " << target << std::endl;
    if (!intern || !signer || !executor)
        throw IncompleteOfficeException();
    else {
        std::cout << "Intern compose a Form..." << std::endl;
        try {
            Form *form = intern->makeForm(formname, target);
            std::cout << *form;
            std::cout << "Form is done" << std::endl;
            std::cout << "Form is going to be signed by " << *signer;
            form->beSigned(*signer);
            std::cout << *form;
            std::cout << "Form is signed successfully" << std::endl;
            std::cout << "Form transferred to execution to " << *executor;
            form->execute(*executor);
            std::cout << "Request : " << formname << " to " << target << " is fulfilled" << std::endl;
        }
        catch (Intern::NotExistingFormException &e) {
            throw Intern::NotExistingFormException(e);
        }
        catch (Form::GradeTooLowException &e) {
            throw Form::GradeTooLowException(e);
        }
        catch (Form::GradeTooHighException &e) {
            throw Form::GradeTooHighException(e);
        }
        catch (Form::IsNotSignedException &e) {
            throw Form::IsNotSignedException(e);
        }
    }
}

OfficeBlock::IncompleteOfficeException::IncompleteOfficeException() {}

OfficeBlock::IncompleteOfficeException::IncompleteOfficeException(IncompleteOfficeException const & src) {
    *this = src;
}

OfficeBlock::IncompleteOfficeException::~IncompleteOfficeException() throw() {}

OfficeBlock::IncompleteOfficeException & OfficeBlock::IncompleteOfficeException::operator=(IncompleteOfficeException const &) {
    return *this;
}

const char* OfficeBlock::IncompleteOfficeException::what() const throw() {
    return ("Error: Office is Incomplete");
}