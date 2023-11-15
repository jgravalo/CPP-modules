#include<Harl.hpp>

int main()
{
    Harl    Harl;

    Harl.complain("DEBUG");
    std::cout << std::endl;
    Harl.complain("INFO");
    std::cout << std::endl;
    Harl.complain("WARNING");
    std::cout << std::endl;
    Harl.complain("ERROR");
    std::cout << std::endl;
    Harl.complain("1");
    return (0);
}