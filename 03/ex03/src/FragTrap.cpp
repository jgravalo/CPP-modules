#include <FragTrap.hpp>

FragTrap::FragTrap(): ClapTrap("default")
{
    std::cout << "FragTrap Default constructor called" << std::endl;
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
}

FragTrap::FragTrap(std::string _name) : ClapTrap(_name)
{
    std::cout << "FragTrap Constructor with argument called" << std::endl;
    //name = _name;
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
}

FragTrap::FragTrap(class FragTrap& Copy) : ClapTrap(Copy.getName())
{
    std::cout << "FragTrap Copy constructor called" << std::endl;
    //name = Copy.getName();
    HitPoints = Copy.getHitPoints();
    EnergyPoints = Copy.getEnergyPoints();
    AttackDamage = Copy.getAttackDamage();
}

FragTrap&   FragTrap::operator=(class FragTrap& Copy)
{
    std::cout << "FragTrap Copy assignment operator called" << std::endl;
    name = Copy.getName();
    HitPoints = Copy.getHitPoints();
    EnergyPoints = Copy.getEnergyPoints();
    AttackDamage = Copy.getAttackDamage();
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called" << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << name << " said: Choca esos cinco" << std::endl;
}
