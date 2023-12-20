#include <Fixed.hpp>

Fixed::Fixed(void)
{
    n = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int _n)
{
    n = _n << bits;
}

Fixed::Fixed(const class Fixed& _Fixed)//copy constructor
{
    std::cout << "Copy constructor called" << std::endl;
    n = _Fixed.getRawBits();
}

Fixed& Fixed::operator=(const class Fixed& _Fixed)//copy assignment operator
{
    std::cout << "Copy assignment operator called" << std::endl;
    n = _Fixed.getRawBits();
    return (*this);
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

int     Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (n);
}

void    Fixed::setRawBits(int const raw)
{
    n = raw << bits;
}