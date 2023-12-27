#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include"ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap(void);
        FragTrap(std::string _name);
        FragTrap(class FragTrap& Copy);
        FragTrap&   operator=(class FragTrap& Copy);
        ~FragTrap();
        void    highFivesGuys(void);
};

#endif