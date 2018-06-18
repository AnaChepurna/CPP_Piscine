#include <iostream>

int main(int argc, char *argv[])
{
    int     i;
    int     j;
    char    c;

	if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        i = 0;
        while (++i < argc)
        {
            j = -1;
            while(argv[i][++j])
            {
                c = argv[i][j];
                if (c >= 'a' && c <= 'z')
                    c -= 32;
                std::cout << c;
            }
        }
    }
    std::cout << std::endl;
	return 0;
}