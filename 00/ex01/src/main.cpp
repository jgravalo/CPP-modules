#include<Phonebook.hpp>
#include<iostream>

int main()
{
    Phonebook   Phonebook;
    std::string buffer;

    while (1)
    {
        std::getline(std::cin, buffer);
        if (buffer == "ADD")
            Phonebook.add();
        else if (buffer == "SEARCH")
            Phonebook.search();
        else if (buffer == "EXIT")
            return (0);
    }
    return (0);
}