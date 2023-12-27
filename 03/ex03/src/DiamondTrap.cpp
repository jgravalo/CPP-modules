#include<DiamondTrap.hpp>

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
    std::cout << "DiamondTrap Default constructor called" << std::endl;
    name = "default";
    ClapTrap::name = name +  "_clap_name";
    HitPoints = FragTrap::HitPoints;
    EnergyPoints = ScavTrap::EnergyPoints;
    AttackDamage = FragTrap::AttackDamage;
}

DiamondTrap::DiamondTrap(std::string _name) : ScavTrap(_name), FragTrap(_name)
{
    std::cout << "DiamondTrap Constructor with argument called" << std::endl;
    ClapTrap::name = _name +  "_clap_name";
    HitPoints = FragTrap::HitPoints;
    EnergyPoints = ScavTrap::EnergyPoints;
    AttackDamage = FragTrap::AttackDamage;
}

DiamondTrap::DiamondTrap(class DiamondTrap& Copy) : ScavTrap(Copy), FragTrap(Copy)
{
    std::cout << "DiamondTrap Copy constructor called" << std::endl;
    //name = Copy.getName();
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
