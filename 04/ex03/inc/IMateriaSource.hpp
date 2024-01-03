#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include"AMateria.hpp"
#include"ICharacter.hpp"
#include"IMateriaSource.hpp"

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
};

#endif

IMateriaSource::~IMateriaSource(void)
{
}

void		IMateriaSource::learnMateria(AMateria*)
{
}

AMateria*	IMateriaSource::createMateria(std::string const &type)
{
}