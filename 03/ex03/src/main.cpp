#include<DiamondTrap.hpp>

int main()
{
    DiamondTrap    A("Franklin");
    DiamondTrap    B(A);
    DiamondTrap    C;

    B.setName("Trevor");
    std::cout << "aqui" << std::endl;
    C = A;
    C.setName("Michael");
    C.displayInfo();
    A.attack(B.getName());
    A.whoAmI();
    B.whoAmI();
    C.whoAmI();
    B.displayInfo();
    B.takeDamage(A.getAttackDamage());
    B.displayInfo();
    B.beRepaired(2);
    B.displayInfo();
    C.guardGate();
    C.highFivesGuys();
    C.whoAmI();
    return (0);
}
