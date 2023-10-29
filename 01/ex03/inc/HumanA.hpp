#ifndef HUMANA_HPP
#define HUMANA_HPP

#include<Weapon.hpp>

class HumanA
{
    private:
        std::string name;
        Weapon&     Weapon;

    public:
        HumanA(class Weapon& Weapon);
        HumanA(std::string name, class Weapon &Weapon);
        ~HumanA(void);
        void attack(void);
        void setWeapon(class Weapon Weapon);
};

#endif