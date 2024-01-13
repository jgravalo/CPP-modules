#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    protected:
        Brain       *Brain;
    public:
        Cat(void);
        Cat(class Cat &Copy);
        Cat&	operator=(class Cat &Copy);
        ~Cat();
		void	learn(std::string idea);
		void	discuss(int idx);
		void	express();
		void	makeSound(void) const;
};

#endif