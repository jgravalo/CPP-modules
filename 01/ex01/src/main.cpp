#include <Zombie.hpp>

int main()
{
    int i, n = 10;
    Zombie *Zombie;

    Zombie = zombieHorde(n, "Paco");
    for (i = 0; i < n; i++)
        Zombie[i].announce();
    delete[] Zombie;
    return (0);
}