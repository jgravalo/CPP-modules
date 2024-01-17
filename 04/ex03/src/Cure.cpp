#include<All.h>

Cure::Cure() : AMateria("cure")
{
    std::cout << "Cure Default constructor called" << std::endl;
}

Cure::Cure(class Cure& Copy) : AMateria(Copy)
{
    std::cout << "Cure Copy constructor called" << std::endl;
}

Cure::Cure(const class Cure& Copy) : AMateria(Copy)
{
    std::cout << "Cure constant Copy constructor called" << std::endl;
}

Cure&	Cure::operator=(class Cure& Copy)
{
    std::cout << "Cure Copy assignment operator called" << std::endl;
	type = Copy.getType();
	return (*this);
}

Cure::~Cure()
{
    std::cout << "Cure Destructor called" << std::endl;
}

Cure* Cure::clone() const
{
	Cure	*n = new Cure(*this);
	return (n);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "\'s wounds  *" << std::endl;
}
