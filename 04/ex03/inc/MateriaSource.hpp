
#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include<IMateriaSource.hpp>
#include<All.h>

//class ICharacter;

class MateriaSource : public IMateriaSource
{
	private:
		AMateria*	store[4];
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

#endif 