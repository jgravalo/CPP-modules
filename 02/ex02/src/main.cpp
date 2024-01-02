#include <Fixed.hpp>

int main( void )
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    //a = b;
    if (a > b)
        std::cout << "a mayor que b" << std::endl;
    if (a < b)
        std::cout << "a menor que b" << std::endl;
    if (a >= b)
        std::cout << "a mayor o igual que b" << std::endl;
    if (a <= b)
        std::cout << "a menor o igual que b" << std::endl;
    if (a == b)
        std::cout << "a igual que b" << std::endl;
    if (a != b)
        std::cout << "a distinto de b" << std::endl;
    std::cout << a + b << std::endl;
    std::cout << a - b << std::endl;
    std::cout << a * b << std::endl;
    std::cout << a / b << std::endl;
 
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max(a, b) << std::endl; 
    return 0;
}