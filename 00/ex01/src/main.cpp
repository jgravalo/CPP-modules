#include<Phonebook.hpp>
#include<iostream>

int main()
{
    Phonebook   Phonebook;
    std::string buffer;

    while (1)
    {
        std::getline(std::cin, buffer);
        if (buffer == "add")//"ADD")
        {
            std::cout << "add" << std::endl;
            Phonebook.add();
        }
        else if (buffer == "search")//"SEARCH")
        {
            std::cout << "search" << std::endl;
            Phonebook.search();
        }
        else if (buffer == "exit")//"EXIT")
            return (0);
//            Phonebook.exit();
    }
    return (0);
}