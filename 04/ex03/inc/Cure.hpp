#ifndef CURE_HPP
#define CURE_HPP

#include"AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(class Cure& Copy);
		Cure	operator=(class Cure& Copy);
		~Cure(void);
		void	use(ICharacter& target);
};

#endif

Cure::Cure(void) : AMateria("cure")
{
}

Cure::Cure(class Cure& Copy) : AMateria(Copy.getType())
{
}

Cure&	Cure::operator=(class Cure& Copy)
{
	type = Copy.getType();
	return (*this);
}

Cure::~Cure(void)
{
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals <name>’s wounds *" << std::endl;
}
