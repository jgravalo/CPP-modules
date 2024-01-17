#include<All.h>

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice Default constructor called" << std::endl;
}

Ice::Ice(class Ice& Copy) : AMateria(Copy)
{
    std::cout << "Ice Copy constructor called" << std::endl;
}

Ice::Ice(const class Ice& Copy) : AMateria(Copy)
{
    std::cout << "Ice constant Copy constructor called" << std::endl;
}

Ice&	Ice::operator=(class Ice& Copy)
{
    std::cout << "Ice Copy assignment operator called" << std::endl;
	type = Copy.getType();
	return (*this);
}

Ice::~Ice()
{
    std::cout << "Ice Destructor called" << std::endl;
}

Ice*	Ice::clone() const
{
	Ice	*n = new Ice(*this);
	return (n);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
