#include<WrongCat.hpp>

WrongCat::WrongCat(void) : WrongAnimal("Cat")
{
}

WrongCat::WrongCat(class WrongCat& Copy)
{
    type = Copy.type;
    sound = Copy.sound;
}

WrongCat&    WrongCat::operator=(class WrongCat& Copy)
{
    type = Copy.type;
    sound = Copy.sound;
    return (*this);
}

WrongCat::~WrongCat()
{
}
