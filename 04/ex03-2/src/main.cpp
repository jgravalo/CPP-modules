#include<All.h>

void test_AMateria()
{
	/* 
	AMateria	A("weed");
	AMateria	B;
	AMateria	C(B);
	AMateria const	*D;

	B = A;
	D = A.clone();
	std::cout << "AMateria type is " << A.getType() << std::endl;
	std::cout << "AMateria type is " << B.getType() << std::endl;
	std::cout << "AMateria type is " << C.getType() << std::endl;
	std::cout << "AMateria type is " << D->getType() << std::endl;
	 */
}

void test_Ice_Cure()
{
	Ice		A;
	Cure	B;
	AMateria *A2 = A.clone();
	AMateria *B2 = B.clone();

	std::cout << "Ice type is " << A.getType() << std::endl;
	std::cout << "Cure type is " << B.getType() << std::endl;
	std::cout << "Ice type is " << A2->getType() << std::endl;
	std::cout << "Cure type is " << B2->getType() << std::endl;
	delete A2;
	delete B2;
}

void test_Character()
{
	Character A;
	Character B("Franklin");
	Character C(A);

	A = B;
	std::cout << "Character's name is " << A.getName() << std::endl;
	std::cout << "Character's name is " << B.getName() << std::endl;
	std::cout << "Character's name is " << C.getName() << std::endl;
	B.printSlots();
	AMateria *m = new Ice();
	B.equip(m);
	B.printSlots();
	B.unequip(0);
	B.printSlots();
}

int main()
{
	test_AMateria();
	test_Ice_Cure();
	test_Character();
	return 0;
}