#include<Dog.hpp>

Dog::Dog(void)
{
    std::cout << "Dog Default constructor called" << std::endl;
    Brain = new class Brain();
    type = "Dog";
    sound = "wau wau";
}

Dog::Dog(class Dog& Copy)
{
    std::cout << "Dog Copy constructor called" << std::endl;
    Brain = new class Brain(*Copy.Brain);
    type = Copy.type;
    sound = Copy.sound;
}

Dog&    Dog::operator=(class Dog& Copy)
{
    std::cout << "Dog Copy assignment operator called" << std::endl;
    Brain = new class Brain(*Copy.Brain);
    Brain = Copy.Brain;
    type = Copy.type;
    sound = Copy.sound;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
    delete Brain;
}

void	Dog::makeSound(void) const
{
    if (sound == "")
        return ;
    std::cout << sound << std::endl;
}

