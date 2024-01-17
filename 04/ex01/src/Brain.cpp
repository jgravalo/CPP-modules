#include<Brain.hpp>

Brain::Brain(void)
{
    std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain(class Brain& Copy)
{
    std::cout << "Brain Copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
    	ideas[i] = Copy.ideas[i];
}

Brain&   Brain::operator=(class Brain& Copy)
{
    std::cout << "Brain Copy assignment operator called" << std::endl;
	for (int i = 0; i < 100; i++)
    	ideas[0] = Copy.ideas[0];
    return (*this);
}

Brain::~Brain(void)
{
    std::cout << "Brain Destructor called" << std::endl;
}

void	Brain::learning(std::string idea)
{
	int i;

	for (i = 0; i < 100 && ideas[i] != ""; i++)
		;
	ideas[i] = idea;
}

void	Brain::discussing(int idx)
{
	if (idx < 0 || idx > 100)
	{
		std::cout << "! invalid idx !" << std::endl;
		return ;
	}
	if (ideas[idx] == "")
	{
		std::cout << "* I have not idea about that *" << std::endl;
		return ;
	}
	std::cout << "* " << ideas[idx] << " *" << std::endl;
}

void	Brain::expressing()
{
	for (int i = 0; i < 100; i++)
		if (ideas[i] != "")
			std::cout << "* " << ideas[i] << " *" << std::endl;
}

void	Brain::forgetting(int idx)
{
	ideas[idx] = "";
}