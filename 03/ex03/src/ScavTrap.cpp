#include<ScavTrap.hpp>

ScavTrap::ScavTrap(): ClapTrap("default")
{
    std::cout << "ScavTrap Default constructor called" << std::endl;
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{
    std::cout << "ScavTrap Constructor with argument called" << std::endl;
    //name = _name;
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
}

ScavTrap::ScavTrap(class ScavTrap& Copy) : ClapTrap(Copy.getName())
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
    //name = Copy.getName();
    HitPoints = Copy.getHitPoints();
    EnergyPoints = Copy.getEnergyPoints();
    AttackDamage = Copy.getAttackDamage();
}

ScavTrap&   ScavTrap::operator=(class ScavTrap& Copy)
{
    std::cout << "ScavTrap Copy assignment operator called" << std::endl;
    name = Copy.getName();
    HitPoints = Copy.getHitPoints();
    EnergyPoints = Copy.getEnergyPoints();
    AttackDamage = Copy.getAttackDamage();
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}

void    ScavTrap::attack(const std::string& target)
{
    if (EnergyPoints <= 0)
    {
        std::cout << "ScavTrap " << name << "cannot attack. He's too tired" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << name << " attacks " << target << " , causing " << AttackDamage << " points of damage!"<< std::endl;
    EnergyPoints--;
}


void    ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}