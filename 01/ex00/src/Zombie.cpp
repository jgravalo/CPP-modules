#include <Zombie.hpp>

Zombie::Zombie(void)
{
}

Zombie::Zombie(std::string _name)
{
    name = _name;
}

Zombie::~Zombie()
{
    std::cout << name << " fue destruido" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName(std::string _name)
{
    name = _name;
}
