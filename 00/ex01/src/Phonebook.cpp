#include<Phonebook.hpp>

Phonebook::Phonebook()
{
    size = 0;
}

Phonebook::Phonebook(Contact _contact)
{
    contact[0] = _contact;
    size = 1;
}

Phonebook::~Phonebook()
{
}

void    Phonebook::add(void)
{
    int i, n = 5, full = 0, fail = 0;
    std::string field[n], data[n];


    field[0] = "first name";
    field[1] = "last name";
    field[2] = "nickname";
    field[3] = "phone number";
    field[4] = "darkest secret";
    for (i = 0; i < n; i++)
    {
            std::cout << field[i] << ": ";
            if (getline(std::cin, data[i]) == 0)
            {
                fail = 1;
                //std::cout << std::endl;
                return ;
            }
            //std::cin >> data[i];
            //std::cout << data[i] << std::endl;
            if (i == 3 && (isnumber(data[i]) || data[i].length() != 9))
            {
                std::cerr << "Error: bad format for phone number" << std::endl;
                return ;
            }
            if (data[i] == "" || isempty(data[i]))
            {
                std::cerr << "Error: empty field when setting contact" << std::endl;
                return ;
            }
    }
    /*
    if (fail == 1)
        return ;
    if (fail == 2)
    {
        std::cerr << "Error: empty field when setting contact" << std::endl;
        return ;
    }
    if (fail == 3)
    {
        std::cerr << "Error: bad format for phone number" << std::endl;
        return ;
    }
    */
    if (size == 8)
    {
        for (i = 0; i < 7; i++)
            contact[i] = contact[i + 1];
        std::cerr << "Warning: The phonebook is full. Retyping the first contact" << std::endl;
        full = 1;
    }
    if (full == 0)
        size++;
    contact[size - 1].Set_Contact(data[0], data[1], data[2], data[3], data[4]);
}

void    Phonebook::search(void)
{
    int         i;
    std::string index;

    if (!size)
    {
        std::cerr << "There are no contacts" << std::endl;
        return ;
    }
    for (i = 0; i < size; i++)
    {
        contact[i].Display1(i);
    } 
    std::cout << "Enter index: ";
    if (getline(std::cin, index) == 0)
        return ;
    if (isnumber(index))
    {
        std::cerr << "Error: bad index" << std::endl;
        return ;
    }
    i = std::atoi(index.c_str());
    if (!(i > 0 && i <= size))
    {
        std::cerr << "Error: no index found" << std::endl;
        return ;
    }
    contact[i - 1].Display2();
}

int     Phonebook::isnumber(std::string str)
{
    size_t i;

    if (str.length() == 0)
        return (1);
    for (i = 0; i < str.length(); i++)
    {
        if (!(str[i] >= '0' && str[i] <= '9'))
            return (1);
    }
    return (0);
}

int     Phonebook::isempty(std::string str)
{
    size_t i;

    if (str.length() == 0)
        return (1);
    for (i = 0; i < str.length(); i++)
    {
        if (!(str[i] >= 8 && str[i] <= 13) && !(str[i] == ' '))
            return (0);
    }
    return (1);
}

void    Phonebook::exit(void)
{
}