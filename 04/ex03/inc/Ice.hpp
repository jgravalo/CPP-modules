#ifndef ICE_HPP
#define ICE_HPP

#include"AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(class AMateria& Copy);
		Ice	operator=(class AMateria& Copy);
		~Ice(void);
		void	use(ICharacter& target);
};

#endif

Ice::Ice(void) : AMateria("ice")
{
}

Ice::Ice(class Ice& Copy) : AMateria(Copy.getType())
{
}

Ice&	Ice::operator=(class Ice& Copy)
{
	type = Copy.getType();
	return (*this);
}

Ice::~Ice(void)
{
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at <name> *" << std::endl;
}