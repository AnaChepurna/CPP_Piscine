//
// Created by Anastasia CHEPURNA on 26.06.2018.
//

#include "CentralBureaucracy.hpp"
#include "Form.hpp"

CentralBureaucracy::CentralBureaucracy() {
    srand(time(0));
}

CentralBureaucracy::CentralBureaucracy(CentralBureaucracy const &src) {
    *this = src;
}

CentralBureaucracy &CentralBureaucracy::operator=(CentralBureaucracy const &src) {
    (void)src;
    return (*this);
}

CentralBureaucracy::~CentralBureaucracy() {
    QueueNode * ptr;
    while ((ptr = getFirst()) != NULL)
        delete ptr;
}

CentralBureaucracy::QueueNode * CentralBureaucracy::getFirst() {
    if (!first)
        return (NULL);
    QueueNode * res = first;
    QueueNode * ptr = first->next;
    first = ptr;
    return (res);
}

void CentralBureaucracy::queueUp(std::string target) {
    QueueNode * ptr = first;
    if (!ptr) {
        first = new QueueNode(target);
        return;
    }
    while (ptr->next != NULL)
        ptr = ptr->next;
    ptr->next = new QueueNode(target);
}

void CentralBureaucracy::doBureaucracy() {
    QueueNode * target;
    while ((target = getFirst()))
    {
        std::cout << std::endl;
        try {
            officeBlock[rand() % 20].doBureaucracy(getRandomRequest(), target->target);
        }
        catch (OfficeBlock::IncompleteOfficeException e) {
            std::cout << RED << e.what() << RESET << std::endl;
        }
        catch (Form::GradeTooHighException e) {
            std::cout << RED << e.what() << RESET << std::endl;
        }
        catch (Form::GradeTooLowException e) {
            std::cout << RED << e.what() << RESET << std::endl;
        }
        catch (Form::IsNotSignedException e) {
            std::cout << RED << e.what() << RESET << std::endl;
        }
        catch (Intern::NotExistingFormException e) {
            std::cout << RED << e.what() << RESET << std::endl;
        }
        catch (Bureaucrat::GradeTooHighException & e) {
            std::cout << RED << e.what() << RESET << std::endl;
        }
        catch (Bureaucrat::GradeTooLowException e) {
            std::cout << RED << e.what() << RESET << std::endl;
        }
        catch (std::exception & e) {
            std::cout << RED "unexpected error catched: " << e.what() << RESET << std::endl;
        }
        delete target;
    }

}

std::string CentralBureaucracy::getRandomRequest() {
    static std::string requests[4] = {"robotomy request", "shrubbery creation", "presidential pardon", "unnown request"};
    return (requests[rand() % 4]);
}

void CentralBureaucracy::feed(Bureaucrat *bureaucrat) {
    static int n = 0;
    if (n < 39) {
        if (n % 2)
            officeBlock[n / 2].setExecutor(bureaucrat);
        else {
            officeBlock[n / 2].setIntern(new Intern());
            officeBlock[n / 2].setSigner(bureaucrat);
        }
        n++;
    }
    else
        throw NoVacantPlacesExeption ();
}

CentralBureaucracy::QueueNode::QueueNode(std::string target): target(target), next(NULL) {
}

CentralBureaucracy::QueueNode::QueueNode(): target(NULL), next(NULL) {

}

CentralBureaucracy::QueueNode::QueueNode(const CentralBureaucracy::QueueNode &src) {
    *this = src;
}

CentralBureaucracy::QueueNode &CentralBureaucracy::QueueNode::operator=(const CentralBureaucracy::QueueNode &src) {
    this->target = src.target;
    return (*this);
}

CentralBureaucracy::QueueNode::~QueueNode() {
}

CentralBureaucracy::NoVacantPlacesExeption::NoVacantPlacesExeption() {
}

CentralBureaucracy::NoVacantPlacesExeption::NoVacantPlacesExeption(const CentralBureaucracy::NoVacantPlacesExeption & src) {
    (void)src;
}

CentralBureaucracy::NoVacantPlacesExeption::~NoVacantPlacesExeption() throw() {

}

CentralBureaucracy::NoVacantPlacesExeption &
CentralBureaucracy::NoVacantPlacesExeption::operator=(const CentralBureaucracy::NoVacantPlacesExeption & src) {
    (void)src;
    return (*this);
}

const char *CentralBureaucracy::NoVacantPlacesExeption::what() const throw() {
    return "Error: No vacant places";
}
