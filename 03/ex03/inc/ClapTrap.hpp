#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include<iostream>

class ClapTrap
{
    protected:
        static std::string  name;
        static int         HitPoints;
        static int         EnergyPoints;
        static int         AttackDamage;
    public:
        ClapTrap(void);
        ClapTrap(std::string name);
        ClapTrap(class ClapTrap& Copy);
        ClapTrap&   operator=(class ClapTrap& Copy);
        ~ClapTrap();
        void        setName(std::string name);
        static std::string getName(void);
        static int         getHitPoints(void);
        static int         getEnergyPoints(void);
        static int         getAttackDamage(void);
        void        attack(const std::string& target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);
        void        displayInfo(void);
};

#endif