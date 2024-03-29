#ifndef CURE_HPP
#define CURE_HPP

#include"AMateria.hpp"
#include"All.h"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(class Cure& Copy);
		Cure(const class Cure& Copy);
		Cure&	operator=(class Cure& Copy);
		~Cure();
		Cure*	clone() const;
		void use(ICharacter& target);
};

#endif
