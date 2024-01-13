#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "All.h"

class Character : public ICharacter
{
	private:
		std::string	name;
		AMateria	*slots[4];
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
		void	use(int idx, ICharacter& target);
};

#endif
