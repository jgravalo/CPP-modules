#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include"AMateria.hpp"
#include"ICharacter.hpp"
#include"MateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(class MateriaSource& Copy);
		MateriaSource&	operator=(class MateriaSource& Copy);
		~MateriaSource(void);
};

#endif

MateriaSource::MateriaSource(void)
{
}

MateriaSource::MateriaSource(class MateriaSource& Copy)
{
}

MateriaSource&	MateriaSource::operator=(class MateriaSource& Copy)
{
}

MateriaSource::~MateriaSource(void)
{
}