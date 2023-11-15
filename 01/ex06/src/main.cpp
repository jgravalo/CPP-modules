#include<Harl.hpp>

int     get_index(std::string str)
{
    std::string level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i;

    for (i = 0; i < 4; i++)
        if (str == level[i])
            return (i);
    return (-1);
}

void    do_Harl(int start, class Harl Harl)
{
    std::string level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    std::cout << "[ " << level[start] << " ]" << std::endl;
    Harl.complain(level[start]);
    std::cout << std::endl;
}

int main(int argc, char **argv)
{
    int         n;
    std::string str;
    Harl        Harl;

    if (argc != 2)
    {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return (0);
    }
    str = argv[1];
    n = get_index(str);
    switch (n)
    {
        case 0:
            do_Harl(0, Harl);
        case 1:
            do_Harl(1, Harl);
        case 2:
            do_Harl(2, Harl);
        case 3:
            do_Harl(3, Harl);
            break ;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
    return (0);
}