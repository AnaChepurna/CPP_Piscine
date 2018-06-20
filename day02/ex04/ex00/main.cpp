//
// Created by Anastasia CHEPURNA on 20.06.2018.
//

#include "Fixed.h"

int main()
{
    Fixed a;
   // a.setRawBits(6);
    Fixed b(a);
    //std::cout << b.getRawBits() << std::endl;
   // b.setRawBits(4);
    Fixed c;
    c = b;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    return 0;
}