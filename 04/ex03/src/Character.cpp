#include<All.h>

Character::Character()
{
	size_t i;

	name = "unnamed";
	for (i = 0; i < 4; i++)
	{
		slots[i] = NULL;
	}
	for (i = 0; i < 4; i++)
	{
		floor[i] = NULL;
	}
}

Character::Character(std::string _name)
{
	size_t i;

	name = _name;
	for (i = 0; i < 4; i++)
	{
		slots[i] = NULL;
	}
	for (i = 0; i < 4; i++)
	{
		floor[i] = NULL;
	}
}

Character::Character(class Character &Copy)
{
	size_t i;

	name = Copy.getName();
	for (i = 0; i < 4; i++)
	{
		slots[i] = NULL;
		if (Copy.slots[i] != NULL)
			slots[i] = Copy.slots[i]->clone();
	}
	for (i = 0; i < 4; i++)
	{
		floor[i] = NULL;
		if (Copy.floor[i] != NULL)
			floor[i] = Copy.floor[i]->clone();
	}
}

Character&	Character::operator=(class Character &Copy)
{
	size_t i;

	name = Copy.getName();
	for (i = 0; i < 4; i++)
	{
		if (slots[i] != NULL)
			delete slots[i];
		slots[i] = NULL;
		if (Copy.slots[i] != NULL)
			slots[i] = Copy.slots[i]->clone();
	}
	for (i = 0; i < 4; i++)
	{
		if (floor[i] != NULL)
			delete floor[i];
		floor[i] = NULL;
		if (Copy.floor[i] != NULL)
			floor[i] = Copy.floor[i]->clone();
	}
	return (*this);
}

Character::~Character()
{
	size_t i;

	for (i = 0; i < 4; i++)
	{
		if (slots[i] != NULL)
			delete slots[i];
	}
	for (i = 0; i < 4; i++)
	{
		if (floor[i] != NULL && floor[i]->getType() != "")
			delete floor[i];
	}
}

std::string const & Character::getName() const
{
	std::string const	*ptr = &name;
	return (*ptr);
}

void	Character::equip(AMateria* m)
{
	int i;

	for (i = 0; i < 4 && slots[i] != NULL; i++)
		;
	if (i >= 4)
		std::cout << "! the slots are full !" << std::endl;
	else
		slots[i] = m;
}

void	Character::unequip(int idx)
{
	int	i;

	if (idx < 0 || idx > 3)
	{
		std::cout << "! invalid idx !" << std::endl;
		return ;
	}
	for (i = 0; i < 4 && floor[i] != NULL; i++)
		;
	floor[i] = slots[idx];
	slots[idx] = NULL;
}

void	Character::printSlots()
{
	std::cout << "slots:" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (slots[i] == NULL)
			std::cout << i << ". (null)" << std::endl;
		else
			std::cout << i << ". <" << slots[i]->getType() << ">" << std::endl;
	}
}

void	Character::printFloor()
{
	std::cout << "floor:" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (floor[i] == NULL)
			std::cout << i << ". (null)" << std::endl;
		else
			std::cout << i << ". <" << floor[i]->getType() << ">" << std::endl;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "! invalid idx !" << std::endl;
		return ;
	}
	if (slots[idx] == NULL)
	{
		std::cout << "! empty slot !" << std::endl;
		return ;
	}
	slots[idx]->use(target);
}
