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
    Fixed(const Fixed &dest);
    ~Fixed();
    Fixed & operator=(const Fixed &dest);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

#endif
