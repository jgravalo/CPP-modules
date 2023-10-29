#ifndef HUMANB_HPP
#define HUMANB_HPP

#include<Weapon.hpp>

class HumanB
{
    private:
        std::string name;
        Weapon      *Weapon;

    public:
        HumanB(void);
        HumanB(std::string name);
        ~HumanB(void);
        void attack(void);
        void setWeapon(class Weapon Weapon);
};

#endif