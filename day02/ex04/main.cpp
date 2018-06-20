//
// Created by Anastasia CHEPURNA on 20.06.2018.
//

#include "Fixed.h"
#include "utils.h"

void    eval_expr(char *str)
{
    Fixed fixed[256];
    char op;
    char operators[256];

    int     fi = 0;
    int     oi = 0;

    while (*str)
    {
        fixed[fi++] = ft_atof(&str);
        op = get_operator(&str);
        if (!getOperatorValue(op))
        {
            std::cerr << "Error in input" << std.endl;
            return;
        }
        while (oi > 0 && getOperatorValue(op) < getOperatorValue(operators[oi - 1]))
        {
            oi--;
            Fixed b = fixed[fi--];
            Fixed a = fixed[fi];
            if (operators[oi] == '+')
                fixed[fi] = a + b;
            else if (operators[oi] == '-')
                fixed[fi] = a - b;
            else if (operators[oi] == '*')
                fixed[fi] = a * b;
            else if (operators[oi] == '/')
                fixed[fi] = a / b;
            else if (operators[oi] == '(' && )
        }
        operators[oi++] = op;
    }
}

int main(int c, char **v)
{
    if (c != 2)
        std::cerr << "usage: " << v[0] << " \"express\"" << std::endl;
    else
    {
        std::cout << ft_atof(&v[1]) << std::endl;
    }
}