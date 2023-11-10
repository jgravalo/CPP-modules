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
    //std::cout << "entra en set_contact" << std::endl;
    first_name = _first_name;
    last_name = _last_name;
    nickname = _nickname;
    phone_number = _phone_number;
    darkest_secret = _darkest_secret;
    //std::cout << phone_number << std::endl;
}

int     Contact::Exist(void)
{
    if (phone_number != "")
    {
        return (1);
    }
    return (0);
}

void    Contact::Display1(int index)
{
    //std::cout << "entra en display" << std::endl;
    int i, j, n = 5, column = 10;
    std::string str[n];

    str[0] = first_name;
    str[1] = last_name;
    str[2] = nickname;
    str[3] = phone_number;
    str[4] = darkest_secret;
    std::cout << index + 1 << ": ";
    for (i = 0; i < n; i++)
    {
        for (j = 0; /*str[i][j] &&*/ j < column; j++)
        {
            if (!str[i][j])
                std::cout << " ";
            else if (j == column - 1 && str[i][j + 1])
                std::cout << ".";
            else
                std::cout << str[i][j];
        }
        //std::cout << str[i];
        if (i < n - 1)
            std::cout << " | ";
    }
    std::cout << std::endl;
}

void    Contact::Display2(void)
{
    /*
    int i, n = 5;
    std::string field[n], content[n];

    field[0] = "first name";
    field[1] = "last name";
    field[2] = "nickname";
    field[3] = "phone number";
    field[4] = "darkest secret";
    for (i = 0; i < n; i++)
    {
        std::cout << field[i] << ": ";
    }
    */
    std::cout << "first name: " << first_name << std::endl;
    std::cout << "last name: " << last_name << std::endl;
    std::cout << "nickname: " << nickname << std::endl;
    std::cout << "phone number: " << phone_number << std::endl;
    std::cout << "darkest secret: " << darkest_secret << std::endl;
}