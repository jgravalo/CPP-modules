#include<All.h>

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

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "\'s wounds  *" << std::endl;
}
