//
// Created by Anastasia CHEPURNA on 26.06.2018.
//

#include <cstdlib>
#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
    int		random = (rand() % 3);
    if (random == 0) {
        std::cout << "create A" << std::endl;
        return  new A();
    }
    else if (random == 1) {
        std::cout << "create B" << std::endl;
        return  new B();
    }
    else if (random == 2) {
        std::cout << "create C" << std::endl;
        return  new C();
    }
    else
        return (NULL);
}

void	identify_from_pointer( Base * p )
{
    if (dynamic_cast<A *>(p) != NULL)
        std::cout << "got A from pointer" << std::endl;
    else if (dynamic_cast<B *>(p) != NULL)
        std::cout << "got B from pointer" << std::endl;
    else if (dynamic_cast<C *>(p) != NULL)
        std::cout << "got C from pointer" << std::endl;
}

void	identify_from_reference( Base & p )
{
    if (dynamic_cast<A *>(&p) != NULL)
        std::cout << "got A from reference" << std::endl;
    else if (dynamic_cast<B *>(&p) != NULL)
        std::cout << "got B from reference" << std::endl;
    else if (dynamic_cast<C *>(&p) != NULL)
        std::cout << "got C from reference" << std::endl;
}

int	main(void)
{
    srand(time(NULL));
    Base * ptr = generate();
    identify_from_pointer(ptr);
    identify_from_reference(*ptr);
    return (0);
}