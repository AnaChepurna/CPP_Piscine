//
// Created by Anastasia CHEPURNA on 26.06.2018.
//

#ifndef C_HPP
#define C_HPP


#include "Base.hpp"

class C  : public Base {
public:

    C(void);
    C(C const & src);
    ~C(void);

    C & operator=(C const & rhs);
};


#endif
