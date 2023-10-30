#include<iostream>
#include<fstream>

int main(int argc, char **argv)
{

    if (argc != 4 || !argv)
    {
        std::cout << "Numero incorrecto de argumentos" << std::endl;
        return (1);
    }
    std::string     file = argv[1];
    std::string     input = argv[2];
    std::string     output = argv[3];
    std::ifstream   infile;
    std::ofstream   outfile;
    std::string     buffer;
    std::string     text;

    infile.open(file);
    outfile.open(file + ".replace");//, std::ios::out);
    if (!infile.is_open() || !outfile)
    {
        std::cout << "Error al abrir ejemplo.dat" << std::endl;
        return (1);
    }
    while (std::getline(infile, buffer))
    {
        text += buffer;
        text += "\n";
    }
    int i;
    int len = input.length();
    int found = text.find(input, 0);
    for (i = 0; text[i]; i++)
    {
        if (i == found)
        {
            //std::cout << output;
            outfile << output;
            i += len - 1;
            found = text.find(input, i);
        }
        else
            //std::cout << text[i];
            outfile << text[i];
    }
    return (0);
}