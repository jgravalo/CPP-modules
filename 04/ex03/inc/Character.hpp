#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include"AMateria.hpp"
#include"ICharacter.hpp"
#include"IMateriaSource.hpp"

class Character : public ICharacter
{
	protected:
		std::string	name;
		AMateria*	materias[4];
	public:
		Character(void);
		Character(std::string _name);
		Character(class Character& Copy);
		Character&	operator=(class Character& Copy);
		~Character(void);
};

#endif

Character::Character(void)
{
	name = "";
	for (int i = 0; i < 4; i++)
		Materias[i] = new AMateria();
}

Character::Character(std::string _name)
{
	name = _name;
	for (int i = 0; i < 4; i++)
		Materias[i] = new AMateria();
}

Character::Character(class Character& Copy)
{
	name = Copy.name;
	for (int i = 0; i < 4; i++)
	{
		delete Materias[i];
		Materias[i] = new AMateria(Copy.Materias[i]);
	}
}

Character&	Character::operator=(class Character& Copy)
{
	name = Copy.name;
	for (int i = 0; i < 4; i++)
	{
		delete Materias[i];
		Materias[i] = new AMateria(Copy.Materias[i]);
	}
	return (*this);
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
		delete Materias[i];
}
