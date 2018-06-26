//
// Created by Anastasia CHEPURNA on 26.06.2018.
//

#include <iostream>

struct Data
{
    std::string s1;
    int n;
    std::string s2;
};

char * random_alphanumerical()
{
    char *res = new char[9];
    for(int i = 0; i < 8; i++)
        while (!isalnum(res[i]))
            res[i] = rand()% 127;
    res[8] = '\0';
    return (res);
}

void *	serialize(void)
{
    Data * data = new Data;

    char *s1 = random_alphanumerical();
    data->s1 = static_cast<std::string>(s1);
    char *s2 = random_alphanumerical();
    data->s2 = static_cast<std::string>(s2);
    data->n = rand() % 9 + 48;
    return reinterpret_cast<void *>(data);
}

Data * 	deserialize(void * serial)
{
    Data * data;

    data = reinterpret_cast<Data *>(serial);
    data->s1 = static_cast<std::string>(data->s1);
    data->n = data->n;
    data->s2 = static_cast<std::string>(data->s2);
    return (data);
}

int 	main(void)
{
    srand(time(0));
    void *serial = serialize();
    Data *deserial = deserialize(serial);
    std::cout << deserial->s1 << std::endl;
    std::cout << deserial->n << std::endl;
    std::cout << deserial->s2 << std::endl;
    return 0;
}