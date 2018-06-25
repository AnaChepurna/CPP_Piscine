//
// Created by Anastasia CHEPURNA on 25.06.2018.
//

#ifndef FORM_HPP
#define FORM_HPP


#include <string>
#include "Bureaucrat.hpp"

class Form {
private:
    std::string const	name;
    bool				sign;
    int	const			signGrade;
    int	const			execGrade;

public:
    Form();
    Form(std::string name, int sign, int exec);
    Form(Form const &);
    ~Form();
    Form &	operator=(Form const &);

    std::string		getName() const;
    bool			getSigned() const;
    int				getSignGrade() const;
    int				getExecGrade() const;
    void			beSigned(Bureaucrat &);
    void			setSigned();

    class GradeTooHighException : public std::exception
    {
    public:
        GradeTooHighException();
        GradeTooHighException(GradeTooHighException const &);
        ~GradeTooHighException() throw();
        GradeTooHighException &		operator=(GradeTooHighException const &);
        virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public:
        GradeTooLowException();
        GradeTooLowException(GradeTooLowException const &);
        ~GradeTooLowException() throw();
        GradeTooLowException &		operator=(GradeTooLowException const &);
        virtual const char* what() const throw();
    };
};

std::ostream &	operator<<(std::ostream &, Form const &);


#endif
