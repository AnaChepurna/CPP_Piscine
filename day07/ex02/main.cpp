//
// Created by Anastasia CHEPURNA on 6/27/18.
//

#include <iostream>
#include "Array.h"

int main()
{
    Array <std::string> array(3);
    array[0] = "John";
    array[1] = "Jessica";
    array[2] = "James";
    std::cout << array.size() << " " << array[0] << " " << array[1] << " " << array[2] << std::endl;

    Array <int> array1(4);
    array1[0] = 1;
    array1[1] = 2;
    array1[2] = 3;
    array1[3] = 4;
    std::cout << array1.size() << " " << array1[0] << " " << array1[1] << " " << array1[2] << " " << array1[3]<< std::endl;
}