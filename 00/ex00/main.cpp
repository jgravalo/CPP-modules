#include<iostream>

int main(int argc, char **argv)
{
    std::string str;
    int         i;
    int         j;

    if (argc < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    for (i = 1; argv[i]; i++)
    {
        for (j = 0; argv[i][j]; j++)
        {
                std::cout << (char)toupper(argv[i][j]);
        }
    }
    std::cout << std::endl;
    return (0);
}