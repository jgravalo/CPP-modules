#include<ClapTrap.hpp>

int main()
{
    ClapTrap    A("Franklin");
    ClapTrap    B(A);
    //ScavTrap    C;

    B.setName("Trevor");
    //C.setName("Michael");
    A.attack(B.getName());
    B.displayInfo();
    B.takeDamage(A.getAttackDamage());
    B.displayInfo();
    B.beRepaired(2);
    B.displayInfo();
    return (0);
}