#include <Fixed.hpp>

int main( void )
{
/*
    float a = 42.42;
    int b;
    std::cout << a << std::endl;
    b = roundf(a * ( 1 << 8 ));
    std::cout << b << std::endl;
    a = static_cast<float>(b) / ( 1 << 8 );
    std::cout << a << std::endl;
*/
    Fixed a;
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    Fixed const d( b );

    a = Fixed( 1234.4321f );
    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;
   
    return 0;
}