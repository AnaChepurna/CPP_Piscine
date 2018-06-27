//
// Created by Anastasia CHEPURNA on 6/27/18.
//

#include <iostream>

template< typename T >
void	iter( T* array, unsigned int length, void (*f)(T) )
{
    for (unsigned int i = 0; i < length; ++i)
        f(array[i]);
}

template< typename T >
void	showArray(T var) {
    std::cout << var << std::endl;
}

int	main()
{
    int integers[] = { 1, 2, 3, 4, 5, 6};
    std::string names[] = { "John", "Jessica", "James" };

    ::iter(integers, 6, ::showArray);
    std::cout << std::endl;
    ::iter(names, 3, ::showArray);
}