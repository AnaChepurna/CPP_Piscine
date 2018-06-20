//
// Created by Anastasia CHEPURNA on 20.06.2018.
//

#include "Fixed.h"

Fixed::Fixed():
fixed_point_value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
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