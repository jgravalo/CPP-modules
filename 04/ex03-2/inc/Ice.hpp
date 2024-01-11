#ifndef ICE_HPP
#define ICE_HPP

#include"AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(class Ice& Copy);
		Ice(const class Ice& Copy);
		Ice&	operator=(class Ice& Copy);
		~Ice();
		Ice*	clone() const;
};

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(class Ice& Copy) : AMateria(Copy)
{
}

Ice::Ice(const class Ice& Copy) : AMateria(Copy)
{
}

Ice&	Ice::operator=(class Ice& Copy)
{
	type = Copy.getType();
	return (*this);
}

Ice::~Ice()
{
}

Ice*	Ice::clone() const
{
	Ice	*n = new Ice(*this);
	return (n);
}

#endif