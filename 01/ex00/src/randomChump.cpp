#include <Zombie.hpp>

void    randomChump(std::string name)
{
    Zombie Zombie;
    Zombie.setName(name);
    Zombie.announce();
}