#include <Zombie.hpp>

Zombie* zombieHorde(int N, std::string name)
{
    int i;
    Zombie  *zombieHorde = new Zombie[N];
    
    for (i = 0; i < N; i++)
    {
        zombieHorde[i].setName(name);
    }
    return (&zombieHorde[0]);
}