//
// Created by Anastasia CHEPURNA on 25.06.2018.
//

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {
private:
    std::string const name;
    int grade;
    Bureaucrat();

public:
    Bureaucrat(std::string name, int grade);
    Bureaucrat(Bureaucrat const& src);
    Bureaucrat &operator=(Bureaucrat const &src);
    ~Bureaucrat();
    std::string const getName() const;
    int getGrade() const;
    void			operator+=(int const num);
    void			operator-=(int const num);
    Bureaucrat &		operator++(void);
    Bureaucrat		operator++(int);
    Bureaucrat &		operator--(void);
    Bureaucrat		operator--(int);

    class GradeTooHighException: public std::exception
    {
    public:
        GradeTooHighException();
        GradeTooHighException(GradeTooHighException const & src);
        ~GradeTooHighException() throw();
        GradeTooHighException &operator=(GradeTooHighException const & src);
        virtual const char* what() const throw();
    };

    class GradeTooLowException: public std::exception
    {
    public:
        GradeTooLowException();
        GradeTooLowException(GradeTooLowException const & src);
        ~GradeTooLowException() throw();
        GradeTooLowException &operator=(GradeTooLowException const & src);
        virtual const char* what() const throw();
    };
};

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & src);

#endif
