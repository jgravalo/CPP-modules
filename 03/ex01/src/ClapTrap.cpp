#include<ClapTrap.hpp>

ClapTrap::ClapTrap(void)
{
    std::cout << "Default constructor called" << std::endl;
    HitPoints = 10;
    EnergyPoints = 10;
    AttackDamage = 0;
}

ClapTrap::ClapTrap(std::string _name)
{
    std::cout << "Constructor with argument called" << std::endl;
    name = _name;
    HitPoints = 10;
    EnergyPoints = 10;
    AttackDamage = 0;
}

ClapTrap::ClapTrap(class ClapTrap& Copy)
{
    std::cout << "Copy constructor called" << std::endl;
    name = Copy.getName();
    HitPoints = Copy.getHitPoints();
    EnergyPoints = Copy.getEnergyPoints();
    AttackDamage = Copy.getAttackDamage();
}

ClapTrap&   ClapTrap::operator=(class ClapTrap& Copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    name = Copy.getName();
    HitPoints = Copy.getHitPoints();
    EnergyPoints = Copy.getEnergyPoints();
    AttackDamage = Copy.getAttackDamage();
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

void    ClapTrap::attack(const std::string& target)
{
    if (EnergyPoints <= 0)
    {
        std::cout << "ClapTrap " << name << "cannot attack. He's too tired" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << name << " attacks " << target << " , causing " << AttackDamage << " points of damage!"<< std::endl;
    EnergyPoints--;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << name << " has been attacked, he lost " << amount << " hit points!"<< std::endl;
    HitPoints -= amount;
    if (HitPoints <= 0)
    {
        std::cout << "ClapTrap " << name << "cannot attack. He's too tired" << std::endl;
        return ;
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (EnergyPoints <= 0)
    {
        std::cout << "ClapTrap " << name << "cannot repair himself. He's too tired" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << name << " is repairing himself, he recovered " << amount << " hit points!"<< std::endl;
    EnergyPoints--;
    HitPoints += amount;
}

void    ClapTrap::setName(std::string _name)
{
    name = _name;
}

std::string     ClapTrap::getName(void)
{
    return (name);
}

int     ClapTrap::getHitPoints(void)
{
    return (HitPoints);
}

int     ClapTrap::getEnergyPoints(void)
{
    return (EnergyPoints);
}

int     ClapTrap::getAttackDamage(void)
{
    return (AttackDamage);
}

void    ClapTrap::displayInfo(void)
{
    std::cout << name << ": Hit=" << HitPoints
        << ", Energy=" << EnergyPoints << std::endl;
}