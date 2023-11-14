#include<Contact.hpp>

Contact::Contact(/* args */)
{
}

Contact::Contact(std::string _first_name,
                std::string _last_name,
                std::string _nickname,
                std::string _phone_number,
                std::string _darkest_secret)
{
    first_name = _first_name;
    last_name = _last_name;
    nickname = _nickname;
    phone_number = _phone_number;
    darkest_secret = _darkest_secret;
}

Contact::~Contact()
{
}

void    Contact::Set_Contact(std::string _first_name,
                            std::string _last_name,
                            std::string _nickname,
                            std::string _phone_number,
                            std::string _darkest_secret)
{
    first_name = _first_name;
    last_name = _last_name;
    nickname = _nickname;
    phone_number = _phone_number;
    darkest_secret = _darkest_secret;
}

void    Contact::Display1(int index)
{
    //std::cout << "entra en display" << std::endl;
    int i, j, n = 4, column = 10;
    std::string str[n];

    str[0] = index + 49;
    str[1] = first_name;
    str[2] = last_name;
    str[3] = nickname;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < column; j++)
        {
            if (!str[i][j])
                std::cout << " ";
            else if (j == column - 1 && str[i][j + 1])
                std::cout << ".";
            else
                std::cout << str[i][j];
        }
        if (i < n - 1)
            std::cout << " | ";
    }
    std::cout << std::endl;
}

void    Contact::Display2(void)
{
    std::cout << "first name: " << first_name << std::endl;
    std::cout << "last name: " << last_name << std::endl;
    std::cout << "nickname: " << nickname << std::endl;
    std::cout << "phone number: " << phone_number << std::endl;
    std::cout << "darkest secret: " << darkest_secret << std::endl;
}