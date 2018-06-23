//
// Created by Anastasia CHEPURNA on 6/23/18.
//

#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H


#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource {
private:
    AMateria**		materia_box;

public:

    MateriaSource(void);
    MateriaSource(MateriaSource const & cpy);
    ~MateriaSource() {}
    MateriaSource & operator=(MateriaSource const & rhs);

    void 		learnMateria(AMateria*);
    AMateria* 	createMateria(std::string const & type);
};


#endif
