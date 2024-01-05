#include<DiamondTrap.hpp>

int main()
{
    DiamondTrap    A("Franklin");
    DiamondTrap    B(A);
    DiamondTrap    C;

    B.setName("Trevor");
    C = A;
    C.setName("Michael");
    C.displayInfo();
    A.attack(B.getName());
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
