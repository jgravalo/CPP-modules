#include<All.h>

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
