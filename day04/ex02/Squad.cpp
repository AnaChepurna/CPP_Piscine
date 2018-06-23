//
// Created by Anastasia CHEPURNA on 6/23/18.
//

#include "Squad.hpp"
#include <iostream>

Squad::Squad() {
    count = 0;
    first = NULL;
}

Squad::Squad(Squad const &src) {
    (*this) = src;
}

Squad &Squad::operator=(Squad const &src) {
    this->count = src.count;
    ISpaceMarine *ptr = src.first;
    *first = *ptr;
    for(int i = 1; i < src.count; i++)
    {
        *(first->next) = (*ptr->next);
        ptr = ptr->next;
    }
    return (*this);
}

void    Squad::delISpaceMarine(void)
{
    ISpaceMarine *del = first;
    ISpaceMarine *ptr;
    for (int i = 0; i < count; i++)
    {
        ptr = del->next;
        delete del;
        del = ptr;
    }
}

Squad::~Squad() {
    delISpaceMarine();
}

int Squad::getCount() const {
    return count;
}

ISpaceMarine *Squad::getUnit(int index) const {
    ISpaceMarine *ptr = first;
    for (int i = 0; i < count; i++)
    {
        if (i == index) {
            return (ptr);
        }
        ptr = ptr->next;
    }
    return (NULL);
}

int Squad::push(ISpaceMarine *m) {
    if (m == NULL)
    { ;
        return (count);
    }
    if (count == 0)
    {
        first = m;
        count++;
        return (count);
    }
    ISpaceMarine *ptr = first;
    for (int i = 0; i < count - 1; i++) {
        ptr = ptr->next;
    }
    ptr->next = m;
    count++;
    return (count);
}

