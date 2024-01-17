#include<All.h>

Character::Character()
{
	std::cout << "Character Default constructor called" << std::endl;
	size_t i;

	name = "unnamed";
	for (i = 0; i < FULL_SLOT; i++)
	{
		slots[i] = NULL;
	}
	for (i = 0; i < FULL_FLOOR; i++)
	{
		floor[i] = NULL;
	}
}

Character::Character(std::string _name)
{
	std::cout << "Character constructor with arguments called" << std::endl;
	size_t i;

	name = _name;
	for (i = 0; i < FULL_SLOT; i++)
	{
		slots[i] = NULL;
	}
	for (i = 0; i < FULL_FLOOR; i++)
	{
		floor[i] = NULL;
	}
}

Character::Character(class Character &Copy)
{
	std::cout << "Character Copy constructor called" << std::endl;
	size_t i;

	name = Copy.getName();
	for (i = 0; i < FULL_SLOT; i++)
	{
		slots[i] = NULL;
		if (Copy.slots[i] != NULL)
			slots[i] = Copy.slots[i]->clone();
	}
	for (i = 0; i < FULL_FLOOR; i++)
	{
		floor[i] = NULL;
		if (Copy.floor[i] != NULL)
			floor[i] = Copy.floor[i]->clone();
	}
}

Character&	Character::operator=(class Character &Copy)
{
	std::cout << "Character Copy assignment operator called" << std::endl;
	size_t i;

	name = Copy.getName();
	for (i = 0; i < FULL_SLOT; i++)
	{
		if (slots[i] != NULL)
			delete slots[i];
		slots[i] = NULL;
		if (Copy.slots[i] != NULL)
			slots[i] = Copy.slots[i]->clone();
	}
	for (i = 0; i < FULL_FLOOR; i++)
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
	std::cout << "Character Destructor called" << std::endl;
	size_t i;

	for (i = 0; i < FULL_SLOT; i++)
	{
		if (slots[i] != NULL)
			delete slots[i];
	}
	for (i = 0; i < FULL_FLOOR; i++)
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

	for (i = 0; i < FULL_SLOT && slots[i] != NULL; i++)
		;
	if (i >= FULL_SLOT)
		std::cout << "! the slots are full !" << std::endl;
	else
		slots[i] = m;
}

void	Character::unequip(int idx)
{
	int	i;

	if (idx < 0 || idx >= FULL_SLOT)
	{
		std::cout << "! invalid idx !" << std::endl;
		return ;
	}
	for (i = 0; i < FULL_FLOOR && floor[i] != NULL; i++)
		;
	floor[i] = slots[idx];
	slots[idx] = NULL;
}

void	Character::printSlots()
{
	std::cout << "slots:" << std::endl;
	for (int i = 0; i < FULL_SLOT; i++)
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
	for (int i = 0; i < FULL_FLOOR; i++)
	{
		if (floor[i] != NULL)
			std::cout << i << ". <" << floor[i]->getType() << ">" << std::endl;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= FULL_SLOT)
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
