#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
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
        void    setName(std::string name);
};

void    randomChump(std::string name);

Zombie* newZombie(std::string name);

#endif