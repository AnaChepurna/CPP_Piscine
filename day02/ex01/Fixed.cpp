//
// Created by Anastasia CHEPURNA on 20.06.2018.
//

#include "Fixed.h"
#include <cmath>

Fixed::Fixed():
fixed_point_value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(int const n)
{
    std::cout << "Int constructor called" << std::endl;
    setRawBits(n * pow(2, bits));
}

Fixed::Fixed(float const n)
{
    std::cout << "Float constructor called" << std::endl;
    setRawBits(roundf(n * pow(2, bits)));
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (fixed_point_value);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    fixed_point_value = raw;
}

Fixed::Fixed(const Fixed &dest)
{
    std::cout << "Copy constructor called" << std::endl;
    fixed_point_value = dest.getRawBits();
}

Fixed & Fixed::operator=(const Fixed &dest)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &dest)
        fixed_point_value = dest.getRawBits();
    return (*this);
}

int Fixed::toInt() const
{
    return (fixed_point_value / pow(2, bits));
}

float Fixed::toFloat() const
{
    return (fixed_point_value / pow(2, bits));
    return (fixed_point_value / (1 << bits));
}

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs)
{
    o << rhs.toFloat();
    return o;
}