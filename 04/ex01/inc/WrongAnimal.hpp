#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include<iostream>

class WrongAnimal
{
    protected:
        std::string type;
        std::string sound;
    public:
        WrongAnimal(void);
        WrongAnimal(std::string type);
        WrongAnimal(class WrongAnimal &Copy);
        WrongAnimal&     operator=(class WrongAnimal &Copy);
        ~WrongAnimal();
        std::string getType(void) const;
        void        makeSound(void) const;
};

#endif