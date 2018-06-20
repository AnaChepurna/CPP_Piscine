//
// Created by Anastasia CHEPURNA on 20.06.2018.
//

#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed {
private:
    int fixed_point_value;
    static const int bits = 8;
public:
    Fixed();
    Fixed(int const n);
    Fixed(float const n);
    Fixed(const Fixed &dest);
    ~Fixed();
    Fixed & operator=(const Fixed &dest);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat() const;
    int toInt() const;

    bool	operator<(Fixed const & a);
    bool	operator>(Fixed const & a);
    bool	operator<=(Fixed const & a);
    bool	operator>=(Fixed const & a);
    bool	operator==(Fixed const & a);
    bool	operator!=(Fixed const & a);

    Fixed  operator+(Fixed const & a);
    Fixed  operator-(Fixed const & a);
    Fixed  operator*(Fixed const & a);
    Fixed  operator/(Fixed const & a);

    Fixed &		operator++(void);
    Fixed		operator++(int);
    Fixed &		operator--(void);
    Fixed		operator--(int);

    static Fixed & 			min(Fixed & a, Fixed & b);
    static Fixed & 			max(Fixed & a, Fixed & b);
    static const Fixed & 	min(Fixed const & a, Fixed const & b);
    static const Fixed & 	max(Fixed const & a, Fixed const & b);
};

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);


#endif
