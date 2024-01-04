#include<DiamondTrap.hpp>

DiamondTrap::DiamondTrap() : ClapTrap("_clap_name"), ScavTrap(), FragTrap()
{
    std::cout << "DiamondTrap Default constructor called" << std::endl;
    //name = "default";
    //ClapTrap::name = name +  "_clap_name";
    HitPoints = FragTrap::getHitPoints();
    EnergyPoints = ScavTrap::getEnergyPoints();
    AttackDamage = FragTrap::getAttackDamage();
}

DiamondTrap::DiamondTrap(std::string _name) : ClapTrap(_name + "_clap_name"), ScavTrap(_name), FragTrap(_name)
{
    std::cout << "DiamondTrap Constructor with argument called" << std::endl;
    HitPoints = FragTrap::getHitPoints();
    EnergyPoints = ScavTrap::getEnergyPoints();
    AttackDamage = FragTrap::getAttackDamage();
}

DiamondTrap::DiamondTrap(class DiamondTrap& Copy) : ClapTrap(Copy.name + "_clap_name"), ScavTrap(Copy.name), FragTrap(Copy.name)
{
    std::cout << "DiamondTrap Copy constructor called" << std::endl;
    //ClapTrap::name = Copy.name +  "_clap_name";
    HitPoints = Copy.getHitPoints();
    EnergyPoints = Copy.getEnergyPoints();
    AttackDamage = Copy.getAttackDamage();
}

DiamondTrap&   DiamondTrap::operator=(class DiamondTrap& Copy)
{
    std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
    name = Copy.getName();
    HitPoints = Copy.getHitPoints();
    EnergyPoints = Copy.getEnergyPoints();
    AttackDamage = Copy.getAttackDamage();
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor called" << std::endl;
}

void    DiamondTrap::whoAmI(void)
{
    std::cout << "DiamondTrap said: Choca esos cinco" << std::endl;
}
