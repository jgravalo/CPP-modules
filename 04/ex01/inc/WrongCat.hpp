#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat(void);
        WrongCat(class WrongCat &Copy);
        WrongCat& operator=(class WrongCat &Copy);
        ~WrongCat();
};

#endif