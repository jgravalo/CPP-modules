#include<All.h>

int main()
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
	/* 
	Ice		A2;
	Cure	B2;

	std::cout << "Ice type is " << A2.getType() << std::endl;
	std::cout << "Ice type is " << B2.getType() << std::endl;
	*/

	Character A;
	Character B("Franklin");
	Character C(A);

	std::cout << "Character's name is " << A.getName() << std::endl;
	std::cout << "Character's name is " << B.getName() << std::endl;
	return 0;
}