//
// Created by Anastasia CHEPURNA on 6/29/18.
//

#include <iostream>
#include "easyfind.hpp"

int main()
{
    std::list <int>l;
    l.push_back(1);
    l.push_back(1);
    l.push_back(2);
    l.push_back(4);
    l.push_back(5);
    std::cout << easyfind(l, 1) << std::endl;

}
