#include <iostream>

class Fixed
{
    private:
        int n;
        static const int bits = 8;
    public:
       Fixed(void);
       Fixed(int n);
       Fixed(const class Fixed& Fixed);//copy constructor
       Fixed& operator=(const class Fixed& Fixed);//copy assignment operator
       ~Fixed(void);
       int      getRawBits(void) const;
       void     setRawBits(int const raw);
       float    toFloat(void) const;
       int      toInt(void) const;
};