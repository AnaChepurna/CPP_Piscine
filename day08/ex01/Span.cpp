//
// Created by Anastasia CHEPURNA on 6/29/18.
//

#include "Span.h"
#include <numeric>

Span::Span(): n(0) {
    vector.reserve(n);
}

Span::Span(unsigned int n): n(n) {
    vector.reserve(n);
}

Span::Span(Span const &src) {
    *this = src;
}

Span &Span::operator=(Span const &src) {
    n = src.n;
    vector = src.vector;
    return (*this);
}

Span::~Span() {

}

void Span::addNumber(int number) {
    static unsigned int num = 0;
    if (num < n) {
        vector.push_back(number);
        num++;
    }
    else
        throw HasNoPlaceException();
}

int Span::shortestSpan() {
    std::vector<int> 	buf = vector;
    std::sort(buf.begin(), buf.end());
    std::adjacent_difference(buf.begin(), buf.end(), buf.begin() - 1);
    buf.pop_back();
    return (buf[std::distance(buf.begin(), std::min_element(buf.begin(), buf.end()))]);
}

int Span::longestSpan() {
    std::vector<int>::iterator min = std::min_element(vector.begin(), vector.end());
    std::vector<int>::iterator max = std::max_element(vector.begin(), vector.end());
    return (vector[std::distance(vector.begin(), max)] - vector[std::distance(vector.begin(), min)]);
}

Span::HasNoPlaceException::HasNoPlaceException() {

}

Span::HasNoPlaceException::HasNoPlaceException(const Span::HasNoPlaceException &src) {
    *this = src;
}

Span::HasNoPlaceException &Span::HasNoPlaceException::operator=(const Span::HasNoPlaceException &src) {
    (void)src;
    return (*this);
}

Span::HasNoPlaceException::~HasNoPlaceException() throw() {

}

const char *Span::HasNoPlaceException::what() const throw() {
    return "Error: Span overflow";
}
