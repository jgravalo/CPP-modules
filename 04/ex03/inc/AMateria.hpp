#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include<iostream>
#include"AMateria.hpp"
#include"ICharacter.hpp"
#include"IMateriaSource.hpp"

class AMateria
{
	protected:
		std::string	type;
	public:
		AMateria(void);
		AMateria(std::string const &_type);
		AMateria(class AMateria& Copy);
		AMateria	operator=(class AMateria& Copy);
		~AMateria(void);
		std::string const &getType(void) const; //Returns the materia type
		virtual AMateria* clone(void) const = 0;
		virtual void use(ICharacter& target);
};

#endif

AMateria::AMateria(void)
{
	type = "";
}

AMateria::AMateria(std::string const &_type)
{
	type = _type;
}

AMateria::AMateria(class AMateria& Copy)
{
	type = Copy.getType();
}

AMateria&	AMateria::operator=(class AMateria& Copy)
{
	type = Copy.getType();
	return (*this);
}

AMateria::~AMateria(void)
{

}

std::string	&getType(void)
{
	return (type);
}

AMateria*	clone(void)
{
	AMateria	*clone = new AMateria(*this);
	return (clone);
}

void	use(ICharacter& target)
{
	std::cout << "" << std::endl;
}