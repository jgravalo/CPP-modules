/* #ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include"IMateriaSource.hpp"
#include"All.h"

class MateriaSource
{
	private:
		// * data *
	public:
		MateriaSource();
		MateriaSource(std::string _type);
		MateriaSource(class MateriaSource& Copy);
		MateriaSource&	operator=(class MateriaSource& Copy);
		~MateriaSource();
		void		learnMateria(AMateria*);
		AMateria*	createMateria(std::string const & type);
};

MateriaSource::MateriaSource()
{
}

MateriaSource::MateriaSource(std::string _type)
{
}

MateriaSource::MateriaSource(class MateriaSource& Copy)
{
}

MateriaSource&	MateriaSource::operator=(class MateriaSource& Copy)
{
}

MateriaSource::~MateriaSource()
{
}

void		MateriaSource::learnMateria(AMateria*)
{

}
AMateria*	MateriaSource::createMateria(std::string const & type)
{

}

#endif */