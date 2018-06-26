//
// Created by Anastasia CHEPURNA on 26.06.2018.
//

#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits.h>

void case0()
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: impossible" << std::endl;
    std::cout << "double: impossible" << std::endl;
}

void case1(double d)
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: " << std::setprecision(1) << d << "f" << std::endl;
    std::cout << "double: " << std::setprecision(1) << d << std::endl;
}

void case2(double d)
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: impossible" << std::endl;
    std::cout << "double: " << std::setprecision(1) << d << std::endl;
}

void case3(double d)
{
    std::cout << "char: " << static_cast<char>(d) << std::endl;
    std::cout << "int: " << static_cast<int>(d) << std::endl;
    std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
    std::cout << "double: " << d << std::endl;
}

void case4(double d, std::string str)
{
    std::cout << str << std::endl;
    std::cout << "int: " << static_cast<int>(d) << std::endl;
    std::cout << "float: "  << static_cast<float>(d) << "f" << std::endl;
    std::cout << "double: "   << d << std::endl;
}

void convert(char *str)
{
    std::cout.setf(std::ios::fixed);
    double d;
    if (strlen(str) > 308)
        case0();
    else {
        if (strlen(str) == 1 && !isdigit(*str))
            d = static_cast<double>(*str);
        else
            d = atof(str);
        if (isnan(d) || isinf(d))
            case1(d);
        else if (d > MAXFLOAT || d <= -MAXFLOAT)
            case2(d);
        else if (d > INT_MAX || d < INT_MIN)
            case1(d);
        else if (d > CHAR_MAX || d < CHAR_MIN)
            case4(d, "char: impossible");
        else if (!isprint(static_cast<char>(d)))
            case4(d, "char: Non displayable");
        else
            case3(d);
    }
}

int main(int c, char **v)
{
    if (c == 2)
    {
        convert(v[1]);
    }
    else
        std::cerr << "Usage: " << v[0] << " \"input argument\"" << std::endl;

}