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
		virtual	~AMateria();
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
};

#endif