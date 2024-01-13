#include<All.h>

MateriaSource::MateriaSource()
{
	for (size_t i = 0; i < 4; i++)
	{
		store[i] = NULL;
	}
}

MateriaSource::MateriaSource(class MateriaSource& Copy)
{
	for (int i = 0; i < 4; i++)
	{
		store[i] = NULL;
		if (Copy.store[i] != NULL)
			store[i] = Copy.store[i]->clone();
	}
}

MateriaSource&	MateriaSource::operator=(class MateriaSource& Copy)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (store[i] != NULL)
			delete store[i];
		store[i] = NULL;
		if (Copy.store[i] != NULL)
			store[i] = Copy.store[i]->clone();
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (size_t i = 0; i < 4; i++)
	{
		if (store[i] != NULL)
			delete store[i];
	}
}

void		MateriaSource::learnMateria(AMateria* m)
{
	int i;

	for (i = 0; i < 4 && store[i] != NULL; i++)
		;
	if (i >= 4)
		std::cout << "! the store are full !" << std::endl;
	else
		store[i] = m;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (type == store[i]->getType())
		{
			AMateria	*m = store[i]->clone();
			return (m);
		}
	}
	std::cout << "! Unknown Materia type !" << std::endl;
	return (NULL);
}

void	MateriaSource::printSlots()
{
	std::cout << "store:" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (store[i] == NULL)
			std::cout << i << ". (null)" << std::endl;
		else
			std::cout << i << ". " << store[i]->getType() << std::endl;
	}
}
