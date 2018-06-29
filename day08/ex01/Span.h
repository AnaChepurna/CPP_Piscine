//
// Created by Anastasia CHEPURNA on 6/29/18.
//

#ifndef PISCINE_CPP_SPAN_H
#define PISCINE_CPP_SPAN_H

#include <vector>

class Span {
private:
    unsigned int n;
    std::vector<int> vector;
public:
    Span();
    Span(unsigned int n);
    Span(Span const &src);
    Span & operator=(Span const & src);
    ~Span();
    void addNumber(int number);
    int shortestSpan();
    int longestSpan();

    class HasNoPlaceException : public std::exception
    {
    public:
        HasNoPlaceException();
        HasNoPlaceException(HasNoPlaceException const &src);
        HasNoPlaceException &operator=(HasNoPlaceException const & src);
        virtual ~HasNoPlaceException() throw();
        virtual const char *what() const throw();
    };
};


#endif //PISCINE_CPP_SPAN_H
