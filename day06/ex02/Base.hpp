//
// Created by Anastasia CHEPURNA on 26.06.2018.
//

#ifndef BASE_HPP
#define BASE_HPP


class Base {
public:

    Base(void);
    Base(Base const & src);
    virtual ~Base(void);

    Base & operator=(Base const & rhs);
};


#endif
