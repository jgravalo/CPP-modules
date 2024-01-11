#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#pragma once

#include<iostream>

class AMateria
{
	protected:
		std::string	type;
	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(class AMateria& Copy);
		AMateria(const class AMateria& Copy);
		AMateria&	operator=(class AMateria& Copy);
		~AMateria();
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
};

#endif

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