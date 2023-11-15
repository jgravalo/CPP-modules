#include<HumanA.hpp>

HumanA::HumanA(class Weapon& _Weapon) : Weapon(_Weapon)
{
}

HumanA::HumanA(std::string _name, class Weapon& _Weapon) : name(_name), Weapon(_Weapon)
{
    name = _name;
}

HumanA::~HumanA()
{
}

void    HumanA::attack(void)
{
    std::cout << name << " attacks with their " << Weapon.getType() << std::endl;
}