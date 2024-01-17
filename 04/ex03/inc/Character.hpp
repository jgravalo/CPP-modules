#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#define FULL_SLOT 4
#define FULL_FLOOR 100

#include "ICharacter.hpp"
#include "All.h"

class Character : public ICharacter
{
	private:
		std::string	name;
		AMateria	*slots[FULL_SLOT];
		AMateria	*floor[FULL_FLOOR];
	public:
		Character();
		Character(std::string _name);
		Character(class Character &Copy);
		Character&	operator=(class Character &Copy);
		~Character();

		//AMateria	*getSlot(int idx);
		std::string const & getName() const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	printSlots();
		void	printFloor();
		void	use(int idx, ICharacter& target);
};

#endif
