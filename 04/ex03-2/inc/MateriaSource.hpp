#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include"IMateriaSource.hpp"
#include"All.h"

class AMateria;

class MateriaSource
{
	private:
		// * data *
		AMateria*	slots[4];
	public:
		MateriaSource();
		//MateriaSource(std::string _type);
		MateriaSource(class MateriaSource& Copy);
		MateriaSource&	operator=(class MateriaSource& Copy);
		~MateriaSource();
		void		learnMateria(AMateria* m);
		AMateria*	createMateria(std::string const & type);
		void		printSlots();
};

MateriaSource::MateriaSource()
{
	for (size_t i = 0; i < 4; i++)
	{
		slots[i] = NULL;
	}
}
/* 
MateriaSource::MateriaSource(std::string _type)
{
}
 */
MateriaSource::MateriaSource(class MateriaSource& Copy)
{
	for (int i = 0; i < 4; i++)
	{
		slots[i] = NULL;
		if (Copy.slots[i] != NULL)
			slots[i] = Copy.slots[i]->clone();
	}
}

MateriaSource&	MateriaSource::operator=(class MateriaSource& Copy)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (slots[i] != NULL)
			delete slots[i];
		slots[i] = NULL;
		if (Copy.slots[i] != NULL)
			slots[i] = Copy.slots[i]->clone();
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (size_t i = 0; i < 4; i++)
	{
		if (slots[i] != NULL)
			delete slots[i];
	}
}

void		MateriaSource::learnMateria(AMateria* m)
{
	int i;

	for (i = 0; i < 4 && slots[i] != NULL; i++)
		;
	if (i >= 4)
		std::cout << "! the store are full !" << std::endl;
	else
		slots[i] = m;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (type == slots[i]->getType())
		{
			AMateria	*m = slots[i]->clone();
			return (m);
		}
	}
	std::cout << "! Unknown Materia type !" << std::endl;
	return (NULL);
}

void	MateriaSource::printSlots()
{
	std::cout << "slots:" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (slots[i] == NULL)
			std::cout << i << ". (null)" << std::endl;
		else
			std::cout << i << ". " << slots[i]->getType() << std::endl;
	}
	
}

#endif