#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include"AMateria.hpp"
#include"ICharacter.hpp"
#include"IMateriaSource.hpp"

class ICharacter
{
	public:
		virtual ~ICharacter(void) {}
		virtual std::string const &getName(void) const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif

ICharacter::ICharacter(void)
{
	name = "";
	for (int i = 0; i < 4; i++)
		Materias[i] = new AMateria();
}

ICharacter::ICharacter(std::string _name)
{
	name = _name;
	for (int i = 0; i < 4; i++)
		Materias[i] = new AMateria();
}

ICharacter::ICharacter(class ICharacter& Copy)
{
	name = Copy.name;
	for (int i = 0; i < 4; i++)
	{
		delete Materias[i];
		Materias[i] = new AMateria(Copy.Materias[i]);
	}
}

ICharacter&	ICharacter::operator=(class ICharacter& Copy)
{
	name = Copy.name;
	for (int i = 0; i < 4; i++)
	{
		delete Materias[i];
		Materias[i] = new AMateria(Copy.Materias[i]);
	}
	return (*this);
}

ICharacter::~ICharacter(void)
{
	for (int i = 0; i < 4; i++)
		delete Materias[i];
}

std::string const &getName(void)
{
	return (name);
}

void equip(AMateria* m)
{
	for (int i = 0; Materias[i] != NULL; i++)
		;
	Materias[i] = new AMateria(*m);
}

void unequip(int idx)
{
	Materias[idx] = NULL;
}

void use(int idx, ICharacter& target)
{
}
