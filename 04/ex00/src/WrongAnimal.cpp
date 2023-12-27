#include<WrongAnimal.hpp>

WrongAnimal::WrongAnimal(void)
{
    type = "Animal";
    sound = "aaaaaauuuuuuuuu";
}

WrongAnimal::WrongAnimal(std::string _type)
{
    type = _type;
    sound = "aaaaaauuuuuuuuu";
}

WrongAnimal::WrongAnimal(class WrongAnimal &Copy)
{
    type = Copy.type;
    sound = Copy.sound;
}

WrongAnimal& WrongAnimal::operator=(class WrongAnimal &Copy)
{
    type = Copy.type;
    sound = Copy.sound;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
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