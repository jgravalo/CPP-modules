#include<All.h>

AMateria::AMateria()
{
	std::cout << "AMateria Default constructor called" << std::endl;
	type = "unknown";
}

AMateria::AMateria(std::string const & _type)
{
	std::cout << "AMateria constructor with arguments called" << std::endl;
	type = _type;
}

AMateria::AMateria(class AMateria& Copy)
{
	std::cout << "AMateria Copy constructor called" << std::endl;
	type = Copy.getType();
}

AMateria::AMateria(const class AMateria& Copy)
{
	std::cout << "AMateria constant Copy constructor called" << std::endl;
	type = Copy.getType();
}

AMateria&	AMateria::operator=(class AMateria& Copy)
{
	std::cout << "AMateria Copy assignment operator called" << std::endl;
	type = Copy.getType();
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor called" << std::endl;
}

std::string const & AMateria::getType() const
{
	std::string const	*ptr = &type;
	return (*ptr);
}

AMateria* AMateria::clone() const
{
	//AMateria	*n = new AMateria(*this);
	AMateria	*n = NULL;
	n->type = type;
	//AMateria n(*this);
	return (n);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* Unknown effects of this Materia on " << target.getName() << " *" << std::endl;
}
