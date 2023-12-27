#include<Dog.hpp>

Dog::Dog(void) : Animal("Dog", "wau wau")
{
}

Dog::Dog(class Dog& Copy)
{
    type = Copy.type;
    sound = Copy.sound;
}

Dog&    Dog::operator=(class Dog& Copy)
{
    type = Copy.type;
    sound = Copy.sound;
    return (*this);
}

Dog::~Dog()
{
}
