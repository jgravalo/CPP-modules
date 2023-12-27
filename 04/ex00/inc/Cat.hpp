#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat(void);
        Cat(class Cat &Copy);
        Cat& operator=(class Cat &Copy);
        ~Cat();
};

#endif