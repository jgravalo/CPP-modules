#include<Animal.hpp>

Animal::Animal(void)
{
    type = "Animal";
    sound = "";
}

Animal::Animal(std::string _type, std::string _sound)
{
    type = _type;
    sound = _sound;
}

Animal::Animal(class Animal &Copy)
{
    type = Copy.type;
    sound = Copy.sound;
}

Animal& Animal::operator=(class Animal &Copy)
{
    type = Copy.type;
    sound = Copy.sound;
    return (*this);
}

Animal::~Animal()
{
}

std::string Animal::getType(void) const
{
    return (type);
}

void        Animal::makeSound(void) const
{
    if (sound == "")
        return ;
    std::cout << sound << std::endl;
}