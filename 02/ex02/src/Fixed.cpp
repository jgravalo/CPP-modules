#include <Fixed.hpp>

Fixed::Fixed(void)
{
    n = 0;
}

Fixed::Fixed(int _n)
{
    n = _n << bits;
}

Fixed::Fixed(const float _n)
{
    n = roundf(_n * (1 << bits));
}

Fixed::Fixed(const class Fixed& _Fixed)//copy constructor
{
    n = _Fixed.getRawBits();
}

Fixed& Fixed::operator=(const class Fixed& _Fixed)//copy assignment operator
{
    n = _Fixed.getRawBits();
    return (*this);
}

Fixed::~Fixed(void)
{
}


int     Fixed::getRawBits(void) const
{
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

bool   Fixed::operator==(const class Fixed& b)
{
    if (n == b.getRawBits())
        return (true);
    return (false);
}

bool   Fixed::operator!=(const class Fixed& b)
{
    if (n != b.getRawBits())
        return (true);
    return (false);
}

bool   Fixed::operator>=(const class Fixed& b)
{
    if (n >= b.getRawBits())
        return (true);
    return (false);
}

bool   Fixed::operator>(const class Fixed& b)
{
    if (n > b.getRawBits())
        return (true);
    return (false);
}

bool   Fixed::operator<=(const class Fixed& b)
{
    if (n <= b.getRawBits())
        return (true);
    return (false);
}

bool   Fixed::operator<(const class Fixed& b)
{
    if (n < b.getRawBits())
        return (true);
    return (false);
}

Fixed   Fixed::operator+(const class Fixed& b)
{
    Fixed a(this->toFloat() + b.toFloat());
    //a.setRawBits(n + b.getRawBits());
    return (a);
}

Fixed   Fixed::operator-(const class Fixed& b)
{
    Fixed a(this->toFloat() - b.toFloat());
    //a.setRawBits(n - b.getRawBits());
    return (a);
}

Fixed   Fixed::operator*(const class Fixed& b)
{
    Fixed a(this->toFloat() * b.toFloat());
    //a.setRawBits(n * b.getRawBits());
    return (a);
}

Fixed   Fixed::operator/(const class Fixed& b)
{
    Fixed a(this->toFloat() / b.toFloat());
    //a.setRawBits(n / b.getRawBits());
    return (a);
}

Fixed&  Fixed::operator++(void)
{
    ++n;
    return (*this);
}

Fixed&  Fixed::operator--(void)
{
    --n;
    return (*this);
}

Fixed  Fixed::operator++(int )
{
    Fixed a(*this);
    a.setRawBits(n++);
    return (a);
}

Fixed  Fixed::operator--(int )
{
    Fixed a(*this);
    a.setRawBits(n--);
    return (a);
}

Fixed&  Fixed::max(class Fixed& a, class Fixed& b)
{
    if (a < b)
        return (b);
    return (a);
}

Fixed&  Fixed::min(class Fixed& a, class Fixed& b)
{
    if (a > b)
        return (b);
    return (a);
}

const Fixed&  Fixed::max(const class Fixed& a, const class Fixed& b)
{
    if (a.getRawBits() < b.getRawBits())
        return (b);
    return (a);
}

const Fixed&  Fixed::min(const class Fixed& a, const class Fixed& b)
{
    if (a.getRawBits() > b.getRawBits())
        return (b);
    return (a);
}
 
std::ostream& operator<<(std::ostream &out, const Fixed &c)
{
    out << c.toFloat();
    return out;
}