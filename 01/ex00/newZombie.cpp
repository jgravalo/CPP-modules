#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie  *NewZombie = new Zombie;
    NewZombie->setName(name);
    return (NewZombie);
}