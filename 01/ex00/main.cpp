#include<iostream>

class Zombie
{
private:
    /* data */
    std::string name;
public:
    Zombie(void);
    Zombie(std::string name);
    ~Zombie();
    void    announce(void);
};

Zombie::Zombie(void)
{
}

Zombie::Zombie(std::string _name)
{
    name = _name;
}

Zombie::~Zombie()
{
    std::cout << name << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* newZombie(std::string name)
{
    return (&Zombie(name));
}

void    randomChump(std::string name)
{
    Zombie  Zombie;

    Zombie = newZombie(name);
    Zombie.announce(void);
}

int main()
{
    randomChump("Paco");
    return (0);
}