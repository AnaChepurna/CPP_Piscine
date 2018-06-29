//
// Created by Anastasia CHEPURNA on 6/29/18.
//

#ifndef EASYFIND_H
#define EASYFIND_H

#include <algorithm>
#include <list>

template < typename T>

int		easyfind( T & t, int y)
{
    typename T::iterator iterator = std::find(t.begin(), t.end(), y);
    return (iterator != t.end() ? *iterator : -1);
}

#endif
