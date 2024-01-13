#include<Animal.hpp>

Animal::Animal(void)
{
    std::cout << "Animal Default constructor called" << std::endl;
    type = "Animal";
    sound = "";
}

Animal::Animal(std::string _type, std::string _sound)
{
    std::cout << "Animal constructor with arguments called" << std::endl;
    type = _type;
    sound = _sound;
}

Animal::Animal(class Animal &Copy)
{
    std::cout << "Animal Copy constructor called" << std::endl;
    type = Copy.type;
    sound = Copy.sound;
}

Animal& Animal::operator=(class Animal &Copy)
{
    std::cout << "Animal Copy assignment operator called" << std::endl;
    type = Copy.type;
    sound = Copy.sound;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
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
