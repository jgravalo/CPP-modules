#include<Brain.hpp>

Brain::Brain(void)
{
    std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain(class Brain& Copy)
{
    std::cout << "Brain Copy constructor called" << std::endl;
    ideas[0] = Copy.ideas[0];
}

Brain&   Brain::operator=(class Brain& Copy)
{
    std::cout << "Brain Copy assignment operator called" << std::endl;
    ideas[0] = Copy.ideas[0];
    return (*this);
}

Brain::~Brain(void)
{
    std::cout << "Brain Destructor called" << std::endl;
}
