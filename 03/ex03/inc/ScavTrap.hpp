#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include"ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
    public:
        ScavTrap(void);
        ScavTrap(std::string _name);
        ScavTrap(class ScavTrap& Copy);
        ScavTrap&   operator=(class ScavTrap& Copy);
        ~ScavTrap();
        void    attack(const std::string& target);
        void    guardGate(void);
};

#endif