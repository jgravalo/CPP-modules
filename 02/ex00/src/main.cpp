#include <Fixed.hpp>

int main( void )
{
    Fixed a(3);
    Fixed b( a );
    Fixed c;

    c = b;
    b.setRawBits(a.getRawBits());
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    return 0;
}