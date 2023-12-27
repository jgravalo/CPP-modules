#include<Dog.hpp>

Dog::Dog(void) : Animal("Dog", "wau wau")
{
    std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(class Dog& Copy)
{
    std::cout << "Dog Copy constructor called" << std::endl;
    type = Copy.type;
    sound = Copy.sound;
}

Dog&    Dog::operator=(class Dog& Copy)
{
    std::cout << "Dog Copy assignment operator called" << std::endl;
    type = Copy.type;
    sound = Copy.sound;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
}