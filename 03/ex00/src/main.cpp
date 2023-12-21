#include<ClapTrap.hpp>

int main()
{
    ClapTrap    A("Franklin");
    ClapTrap    B(A);
    //ClapTrap    C;

    B.setName("Trevor");
    //C.setName("Michael");
    A.attack(B.getName());
    B.takeDamage(A.getAttackDamage());
    B.beRepaired(2);
    return (0);
}