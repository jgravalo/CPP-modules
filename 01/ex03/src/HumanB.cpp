#include<HumanB.hpp>

HumanB::HumanB(void)
{
}

HumanB::HumanB(std::string _name)
{
    name = _name;
}

HumanB::~HumanB()
{
}

void    HumanB::attack(void)
{
    std::cout << name << " attacks with their " << Weapon->getType() << std::endl;
}

void HumanB::setWeapon(class Weapon _Weapon)
{
    Weapon = &_Weapon;
}