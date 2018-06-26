//
// Created by Anastasia CHEPURNA on 26.06.2018.
//

#ifndef OFFICEBLOCK_HPP
#define OFFICEBLOCK_HPP


#include "Intern.hpp"
#include "Bureaucrat.hpp"

class OfficeBlock {
private:
    Intern * intern;
    Bureaucrat * signer;
    Bureaucrat * executor;

    OfficeBlock(OfficeBlock const& src);
    OfficeBlock &operator=(OfficeBlock const& src);

public:
    OfficeBlock();
    OfficeBlock(Intern *intern, Bureaucrat * signer, Bureaucrat *executor);
    ~OfficeBlock();
    void setIntern(Intern * intern);
    void setSigner(Bureaucrat * signer);
    void setExecutor(Bureaucrat * executor);
    void doBureaucracy(std::string const formname, std::string const target) throw();

    class IncompleteOfficeException : public std::exception
    {
    public:
        IncompleteOfficeException();
        IncompleteOfficeException(IncompleteOfficeException const &);
        ~IncompleteOfficeException() throw();
        IncompleteOfficeException &		operator=(IncompleteOfficeException const &);
        virtual const char* what() const throw();
    };
};


#endif
