#include<WrongCat.hpp>

WrongCat::WrongCat(void) : WrongAnimal("Cat")
{
    std::cout << "WrongCat Default constructor called" << std::endl;
}

WrongCat::WrongCat(class WrongCat& Copy)
{
    std::cout << "WrongCat Copy constructor called" << std::endl;
    type = Copy.type;
    sound = Copy.sound;
}

WrongCat&    WrongCat::operator=(class WrongCat& Copy)
{
    std::cout << "WrongCat Copy assignment operator called" << std::endl;
    type = Copy.type;
    sound = Copy.sound;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called" << std::endl;
}
