#include<ClapTrap.hpp>

int main()
{
    ClapTrap    A("Franklin");
    ClapTrap    B(A);
    ClapTrap    C;

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
    return (0);
}