#include<WrongAnimal.hpp>

WrongAnimal::WrongAnimal(void)
{
    std::cout << "WrongAnimal Default constructor called" << std::endl;
    type = "Animal";
    sound = "hola";
}

WrongAnimal::WrongAnimal(std::string _type)
{
    std::cout << "WrongAnimal constructor with arguments called" << std::endl;
    type = _type;
    sound = "hola";
}

WrongAnimal::WrongAnimal(class WrongAnimal &Copy)
{
    std::cout << "WrongAnimal Copy constructor called" << std::endl;
    type = Copy.type;
    sound = Copy.sound;
}

WrongAnimal& WrongAnimal::operator=(class WrongAnimal &Copy)
{
    std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
    type = Copy.type;
    sound = Copy.sound;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return (type);
}

void        WrongAnimal::makeSound(void) const
{
    if (sound == "")
        return ;
    std::cout << WrongAnimal::sound << std::endl;
}