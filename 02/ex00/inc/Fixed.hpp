#include <iostream>

class Fixed
{
    private:
        int n;
        static const int frac;
    public:
       Fixed(void);
       Fixed(int n);
       Fixed(const class Fixed& Fixed);//copy constructor
       Fixed& operator=(const class Fixed& Fixed);//copy assignment operator
       ~Fixed(void);
       int  getRawBits(void) const;
       void setRawBits(int const raw);
};