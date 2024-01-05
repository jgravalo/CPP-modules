#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include"ScavTrap.hpp"
#include"FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
    private:
        std::string name;
    public:
        DiamondTrap(void);
        DiamondTrap(std::string _name);
        DiamondTrap(class DiamondTrap& Copy);
        DiamondTrap&   operator=(class DiamondTrap& Copy);
        ~DiamondTrap();
        void        whoAmI();
        void        setName(std::string _name);
};

#endif