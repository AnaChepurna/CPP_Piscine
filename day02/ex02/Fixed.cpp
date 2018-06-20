//
// Created by Anastasia CHEPURNA on 20.06.2018.
//

#include "Fixed.h"
#include <cmath>

//--------
//constructors
//--------

Fixed::Fixed():
fixed_point_value(0)
{}

Fixed::~Fixed()
{}

Fixed::Fixed(int const n)
{
    setRawBits(n * pow(2, bits));
}

Fixed::Fixed(float const n)
{
    setRawBits(roundf(n * pow(2, bits)));
}

Fixed::Fixed(const Fixed &dest)
{
    fixed_point_value = dest.getRawBits();
}

//--------
//getters&setters
//--------

int Fixed::getRawBits() const
{
    return (fixed_point_value);
}

void Fixed::setRawBits(int const raw)
{
    fixed_point_value = raw;
}

int Fixed::toInt() const
{
    return (fixed_point_value / pow(2, bits));
}

float Fixed::toFloat() const
{
    return (fixed_point_value / pow(2, bits));
}

//---------
//operators
//---------

Fixed & Fixed::operator=(const Fixed &dest)
{
    if (this != &dest)
        fixed_point_value = dest.getRawBits();
    return (*this);
}

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs)
{
    o << rhs.toFloat();
    return o;
}

bool	Fixed::operator<(Fixed const & a)
{
    return (toFloat() < a.toFloat());
}

bool	Fixed::operator>(Fixed const & a)
{
    return (toFloat() > a.toFloat());
}

bool	Fixed::operator<=(Fixed const & a)
{
    return (toFloat() <= a.toFloat());
}

bool	Fixed::operator>=(Fixed const & a)
{
    return (toFloat() >= a.toFloat());
}

bool	Fixed::operator==(Fixed const & a)
{
    return (toFloat() == a.toFloat());
}

bool	Fixed::operator!=(Fixed const & a)
{
    return (toFloat() != a.toFloat());
}

Fixed  Fixed::operator+(Fixed const & a)
{
    return (Fixed(toFloat() + a.toFloat()));
}

Fixed  Fixed::operator-(Fixed const & a)
{
    return (Fixed(toFloat() - a.toFloat()));
}

Fixed  Fixed::operator*(Fixed const & a)
{
    return (Fixed(toFloat() * a.toFloat()));
}

Fixed  Fixed::operator/(Fixed const & a)
{
    return (Fixed(toFloat() / a.toFloat()));
}

Fixed &		Fixed::operator++(void)
{
    fixed_point_value++;
    return (*this);
}

Fixed		Fixed::operator++(int)
{
    Fixed	a;

    a = *this;
    fixed_point_value++;
    return (a);
}

Fixed &		Fixed::operator--(void)
{
    fixed_point_value--;
    return (*this);
}

Fixed		Fixed::operator--(int)
{
    Fixed	a;

    a = *this;
    fixed_point_value++;
    return (a);
}

//--------
//max&min
//--------

Fixed & 			Fixed::min(Fixed & a, Fixed & b)
{
    if (a.getRawBits() > b.getRawBits())
        return (b);
    return (a);
}

Fixed & 			Fixed::max(Fixed & a, Fixed & b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);
}

const Fixed & 	Fixed::min(Fixed const & a, Fixed const & b)
{
    if (a.getRawBits() > b.getRawBits())
        return (b);
    return (a);
}

const Fixed & 	Fixed::max(Fixed const & a, Fixed const & b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);
}