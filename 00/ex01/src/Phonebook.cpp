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
            getline(std::cin, data[i]);
            if (data[i] == "")
                fail = 1;
    }
    if (fail == 1)
    {
        std::cerr << "Error: empty field when setting contact" << std::endl;
        return ;
    }
    if (size == 8)
    {
        for (i = 0; i < 7; i++)
            contact[i] = contact[i + 1];
        std::cerr << "Warning: The phonebook is full. Retyping the first contact" << std::endl;
        full = 1;
    }
    if (full == 0)
        size++;
    //std::cout << "n of contacts: " << size << std::endl;
    contact[size - 1].Set_Contact(data[0], data[1], data[2], data[3], data[4]);
    //contact[size - 1].Display1(size);
}

void    Phonebook::search(void)
{
    int         i;
    std::string index;

    if (size == 0)
    {
        std::cerr << "There are no contacts" << std::endl;
        return ;
    }
    for (i = 0; i < size; i++)
    {
        contact[i].Display1(i);
    }
    std::cout << "Enter index: ";
    getline(std::cin, index);
    i = std::stoi(index);
    if (!(i > 0 && i <= size))
    {
        std::cerr << "Error: no index found" <<std::endl;
        return ;
    }
    contact[i - 1].Display2();
}

void    Phonebook::exit(void)
{
}