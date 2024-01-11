#include<All.h>

AMateria::AMateria()
{
	type = "unknown";
}

AMateria::AMateria(std::string const & _type)
{
	type = _type;
}

AMateria::AMateria(class AMateria& Copy)
{
	type = Copy.getType();
}

AMateria::AMateria(const class AMateria& Copy)
{
	type = Copy.getType();
}

AMateria&	AMateria::operator=(class AMateria& Copy)
{
	type = Copy.getType();
	return (*this);
}

AMateria::~AMateria()
{
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
	return (n);
}