#include<Cat.hpp>

Cat::Cat(void) : Animal("Cat", "miiaaaauuu")
{
}

Cat::Cat(class Cat& Copy)
{
    type = Copy.type;
    sound = Copy.sound;
}

Cat&    Cat::operator=(class Cat& Copy)
{
    type = Copy.type;
    sound = Copy.sound;
    return (*this);
}

Cat::~Cat()
{
}
