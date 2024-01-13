#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    protected:
        Brain       *Brain;
    public:
        Dog(void);
        Dog(class Dog &Copy);
        Dog&        operator=(class Dog &Copy);
        ~Dog();
		void		learn(std::string idea);
		void		discuss(int idx);
		void		express();
};

#endif