#include<ScavTrap.hpp>

int main()
{
    ScavTrap    A("Franklin");
    ScavTrap    B(A);
    ScavTrap    C;

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
    return (0);
}