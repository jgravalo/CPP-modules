#include<iostream>

class Contact
{
    private:
    /* data */
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    public:
        Contact();
        Contact(
            std::string first_name,
            std::string last_name,
            std::string nickname,
            std::string phone_number,
            std::string darkest_secret
        );
        ~Contact();
        void    Display1(int index);
        void    Display2(void);
        int     Exist(void);
        void    Set_Contact(
            std::string first_name,
            std::string last_name,
            std::string nickname,
            std::string phone_number,
            std::string darkest_secret
        );
};