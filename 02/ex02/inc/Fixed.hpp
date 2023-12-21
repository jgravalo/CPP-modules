#include <iostream>

class Fixed
{
    private:
        int n;
        static const int bits = 8;
    public:
        Fixed(void);
        Fixed(int n);
        Fixed(const float n);
        Fixed(const class Fixed& Fixed);
        Fixed&   operator=(const class Fixed& Fixed);
        ~Fixed(void);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
        bool    operator==(const class Fixed& one);
        bool    operator!=(const class Fixed& one);
        bool    operator<(const class Fixed& one);
        bool    operator<=(const class Fixed& one);
        bool    operator>(const class Fixed& one);
        bool    operator>=(const class Fixed& one);
        Fixed   operator+(const class Fixed& Fixed);
        Fixed   operator-(const class Fixed& Fixed);
        Fixed   operator*(const class Fixed& Fixed);
        Fixed   operator/(const class Fixed& Fixed);
        Fixed&  operator++(void);
        Fixed&  operator--(void);
        Fixed   operator++(int );
        Fixed   operator--(int );
        static Fixed&  max(class Fixed& a, class Fixed& b);
        static Fixed&  min(class Fixed& a, class Fixed& b);
        static const Fixed&  max(const class Fixed& a, const class Fixed& b);
        static const Fixed&  min(const class Fixed& a, const class Fixed& b);
};

std::ostream& operator<<(std::ostream &out, const Fixed &c);