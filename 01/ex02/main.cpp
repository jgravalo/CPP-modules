#include <iostream>

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "La direccion de la string es: " << &string << std::endl;
    std::cout << "La direccion de la stringPTR es: " << stringPTR << std::endl;
    std::cout << "La direccion de la stringREF es: " << &stringREF << std::endl;

    std::cout << "El valor de la string es: " << string << std::endl;
    std::cout << "El valor de la stringPTR es: " << *stringPTR << std::endl;
    std::cout << "El valor de la stringREF es: " << stringREF << std::endl;
    return (0);
}