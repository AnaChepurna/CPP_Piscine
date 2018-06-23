//
// Created by Anastasia CHEPURNA on 6/23/18.
//

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    materia_box = new AMateria*[4];
    for (int i = 0; i < 4; ++i)
        materia_box[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & cpy)
{
    *this = cpy;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs)
{
    materia_box = rhs.materia_box;
    return (*this);
}

void 		MateriaSource::learnMateria(AMateria* m)
{
    int	check;

    check = 0;
    for (int i = 0; i < 4; ++i)
    {
        if (check == 0 && materia_box[i] == NULL)
        {
            materia_box[i] = m;
            check++;
        }
    }
    if (check == 0)
        std::cout << "materia source memory full." << std::endl;
}

AMateria* 	MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; ++i)
    {
        if (materia_box[i] != NULL)
        {
            if (materia_box[i]->getType() == type)
            {
                AMateria * cpy;
                cpy = materia_box[i]->clone();
                return (cpy);
            }
        }
    }
    std::cout << "materia source not found." << std::endl;
    return (NULL);
}