//
// Created by Anastasia CHEPURNA on 20.06.2018.
//

#include "utils.h"

int  getOperatorValue(char c)
{
    if (c == '+' || c == '-')
        return (1);
    if (c == '*' || c == '/')
        return (2);
    if (c == '(')
        return (3);
    if (c == '\0' || c == ')')
        return (-1);
    return (0);
}

char getOperator(char** str)
{
    while (**str == ' ' || **str == '\t')
        (*str)++;
    (*str)++;
    return (*(*str - 1));
}

float ft_atof(char **str)
{
    int point = 0;
    int sign = 1;
    float res = 0;


    while (**str == ' ' || **str == '\t')
        (*str)++;
    if (**str == '-')
    {
        sign = -1;
        (*str)++;
    }
    while ((**str >= '0' && **str <= '9') || **str == '.')
    {
        if (**str == '.')
            point = 1;
        if (**str >= '0' && **str <= '9')
        {
            if (!point)
            {
                res *= 10.0;
                res += (float)(**str - '0');
            }
            else
                res += ((**str - '0') / pow(10.0, point++));
        }
        (*str)++;
    }
    return (res * sign);
}
