#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include<iostream>

class Animal
{
    protected:
        std::string type;
        std::string sound;
    public:
        Animal(void);
        Animal(std::string type, std::string sound);
        Animal(class Animal &Copy);
        Animal&     operator=(class Animal &Copy);
        virtual ~Animal();
        std::string		getType(void) const;
        virtual void	makeSound(void) const = 0;
};

#endif