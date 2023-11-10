#include<Phonebook.hpp>

Phonebook::Phonebook()
{
}

Phonebook::Phonebook(Contact _contact)
{
    contact[0] = _contact;
}

Phonebook::~Phonebook()
{
}

void    Phonebook::add(void)
{
    int i, n = 5;
    std::string field[n], data[n];

    field[0] = "first name";
    field[1] = "last name";
    field[2] = "nickname";
    field[3] = "phone number";
    field[4] = "darkest secret";
    for (i = 0; i < n; i++)
    {
        //while (data[i] == "")
        //{
            std::cout << field[i] << ": ";
            getline(std::cin, data[i]);
        //}
    }
    for (i = 0; contact[i].Exist(); i++)
        ;
    std::cout << "n of contacts: " << i << std::endl;
    //if (i == 8)
    contact[i].Set_Contact(data[0], data[1], data[2], data[3], data[4]);
    contact[i].Display1(i);
}

void    Phonebook::search(void)
{
    int         i;
    std::string index;

    for (i = 0; contact[i].Exist() != 0; i++)
    {
        contact[i].Display1(i);
    }
    std::cout << "enter index: ";
    //while (i >= 0 && i <= 8)
    //{
        /* code */
        getline(std::cin, index);
        i = std::stoi(index) - 1;
    //}
    contact[i].Display2();
}

void    Phonebook::exit(void)
{
}