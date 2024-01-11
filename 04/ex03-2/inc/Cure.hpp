#ifndef CURE_HPP
#define CURE_HPP

#include"AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(class Cure& Copy);
		Cure(const class Cure& Copy);
		Cure&	operator=(class Cure& Copy);
		~Cure();
		Cure*	clone() const;
};

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(class Cure& Copy) : AMateria(Copy)
{
}

Cure::Cure(const class Cure& Copy) : AMateria(Copy)
{
}

Cure&	Cure::operator=(class Cure& Copy)
{
	type = Copy.getType();
	return (*this);
}

Cure::~Cure()
{
}

Cure* Cure::clone() const
{
	Cure	*n = new Cure(*this);
	return (n);
}

#endif
