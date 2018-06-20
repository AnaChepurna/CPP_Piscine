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
};

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);

#endif
