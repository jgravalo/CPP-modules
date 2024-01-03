#ifndef BRAIN_HPP
#define BRAIN_HPP

#include<iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain(void);
        Brain(class Brain& Copy);
        Brain&      operator=(class Brain& Copy);
        ~Brain(void);
};

#endif