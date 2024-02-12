// Created by tde-sous on 03-02-2024.
#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class AMateria;

class IMateriaSource
{
 public:
 virtual ~IMateriaSource() {}
 virtual void learnMateria(AMateria*) = 0;
 virtual AMateria* createMateria(std::string const & type) = 0;
};



#endif //IMATERIASOURCE_HPP