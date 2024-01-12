#ifndef ICE_HPP
#define ICE_HPP

#include"AMateria.hpp"
#include"All.h"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(class Ice& Copy);
		Ice(const class Ice& Copy);
		Ice&	operator=(class Ice& Copy);
		~Ice();
		Ice*	clone() const;
		void use(ICharacter& target);
};

#endif