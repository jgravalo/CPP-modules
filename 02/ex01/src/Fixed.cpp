#include <Fixed.hpp>

Fixed::Fixed(void)
{
    n = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int _n)
{
    std::cout << "Int constructor called" << std::endl;
    n = _n << bits;
}

Fixed::Fixed(const float _n)
{
    std::cout << "Float constructor called" << std::endl;
    n = roundf(_n * (1 << bits));
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
    //std::cout << "getRawBits member function called" << std::endl;
    return (n);
}

void    Fixed::setRawBits(int const raw)
{
    n = raw;
}

float    Fixed::toFloat(void) const
{
    //std::cout << "n is " << n << std::endl;
    return (static_cast<float>(n) / (1 << bits));
}

int      Fixed::toInt(void) const
{
    return (n >> bits);
}

std::ostream& operator<<(std::ostream &out, const Fixed &c)
{
    out << c.toFloat();
    return out;
}