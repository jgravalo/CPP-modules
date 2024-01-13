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
	ICharacter	*D = new Character("Trevor");
	A2->use(*D);
	B2->use(*D);
	delete A2;
	delete B2;
	delete D;
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
	AMateria *n = new Cure();
	B.equip(n);
	B.printSlots();
	B.unequip(0);
	B.unequip(3);
	B.printSlots();
	delete m;
}

void test_MateriaSource()
{
	MateriaSource A;
	MateriaSource B(A);
	A.learnMateria(new Ice());
	A.learnMateria(new Ice());
	A.learnMateria(new Cure());
	A.printSlots();
	AMateria* m = A.createMateria("cure");
	std::cout << "AMateria type is " << m->getType() << std::endl;
}

void test_Subject()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
}

int main()
{
	//test_AMateria();
	//test_Ice_Cure();
	//test_Character();
	//test_MateriaSource();
	test_Subject();
	return 0;
}