#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog(void);
        Dog(class Dog &Copy);
        Dog& operator=(class Dog &Copy);
        ~Dog();
};

#endif