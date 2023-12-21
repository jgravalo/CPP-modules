#include<iostream>

class ClapTrap
{
private:
    std::string name;
    int         HitPoints;
    int         EnergyPoints;
    int         AttackDamage;
public:
    ClapTrap(void);
    ClapTrap(std::string name);
    ClapTrap(class ClapTrap& Copy);
    ClapTrap&   operator=(class ClapTrap& Copy);
    ~ClapTrap();
    void        setName(std::string name);
    std::string getName(void);
    int         getHitPoints(void);
    int         getEnergyPoints(void);
    int         getAttackDamage(void);
    void        attack(const std::string& target);
    void        takeDamage(unsigned int amount);
    void        beRepaired(unsigned int amount);
    void        displayInfo(void);
};