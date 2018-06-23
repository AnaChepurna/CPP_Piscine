//
// Created by Anastasia CHEPURNA on 6/23/18.
//

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(void): name("")
{
    materia = new AMateria*[4];
}

Character::Character(std::string name): name(name)
{
    materia = new AMateria*[4];

    for (int i = 0; i < 4; ++i)
    {
        materia[i] = NULL;
    }
}

Character::Character(Character const & cpy)
{
    *this = cpy;
}

Character::~Character()
{
    delete [] materia;
}

Character &	Character::operator=(Character const & rhs)
{
    name = rhs.name;
    materia = rhs.materia;
    return (*this);
}


std::string const & Character::getName() const
{
    return (name);
}

void 				Character::equip(AMateria* m)
{
    int	check;

    check = 0;
    for (int i = 0; i < 4; ++i)
    {
        if (check == 0 && materia[i] == NULL)
        {
            materia[i] = m;
            check++;
        }
    }
    if (check == 0)
        std::cout << "inventory full." << std::endl;
}

void 				Character::unequip(int idx)
{
    if (materia[idx] == NULL)
        std::cout << "inventory empty." << std::endl;
    else
        materia[idx] = NULL;
}

void 				Character::use(int index, ICharacter& target)
{
    if (materia[index] == NULL || index > 3 || index < 0)
        std::cout << "no materia in this slot." << std::endl;
    else
    {
        materia[index]->use(target);
        materia[index] = NULL;
    }
}