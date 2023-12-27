#include<Cat.hpp>

Cat::Cat(void) : Animal("Cat", "miiaaaauuu")
{
    std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(class Cat& Copy)
{
    std::cout << "Cat Copy constructor called" << std::endl;
    type = Copy.type;
    sound = Copy.sound;
}

Cat&    Cat::operator=(class Cat& Copy)
{
    std::cout << "Cat Copy assignment operator called" << std::endl;
    type = Copy.type;
    sound = Copy.sound;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
}
