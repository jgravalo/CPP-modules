#include "Zombie.hpp"

int main()
{
    Zombie *Zombie;

    Zombie = newZombie("Paco");
    Zombie->announce();
    delete Zombie;
    randomChump("Isco");
    return (0);
}