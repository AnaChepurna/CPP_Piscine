//
// Created by Anastasia CHEPURNA on 6/23/18.
//

#ifndef SQUAD_HPP
#define SQUAD_HPP


#include "ISquad.hpp"

class Squad: public ISquad  {

private:
    int count;
    ISpaceMarine *first;

    void delISpaceMarine(void);

public:
    Squad();
    Squad(Squad const& src);
    Squad &operator=(Squad const& src);

    virtual ~Squad();
    virtual int getCount() const;
    virtual ISpaceMarine* getUnit(int) const;
    virtual int push(ISpaceMarine*);
};


#endif