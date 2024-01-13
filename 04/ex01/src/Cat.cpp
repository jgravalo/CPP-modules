#include<Cat.hpp>

Cat::Cat(void)
{
    std::cout << "Cat Default constructor called" << std::endl;
    Brain = new class Brain();
    type = "Cat";
    sound = "miiaaaauuu";
}

Cat::Cat(class Cat& Copy)
{
    std::cout << "Cat Copy constructor called" << std::endl;
    Brain = new class Brain(*Copy.Brain);
    type = Copy.type;
    sound = Copy.sound;
}

Cat&    Cat::operator=(class Cat& Copy)
{
    std::cout << "Cat Copy assignment operator called" << std::endl;
    if (Brain)
        delete Brain;
    Brain = new class Brain(*Copy.Brain);
    type = Copy.type;
    sound = Copy.sound;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
    delete Brain;
}


void	Cat::learn(std::string idea)
{
	Brain->learning(idea);
}

void	Cat::discuss(int idx)
{
	Brain->discussing(idx);
}

void	Cat::express()
{
	Brain->expressing();
}
