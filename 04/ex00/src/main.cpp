#include <Animal.hpp>
#include <Cat.hpp>
#include <Dog.hpp>
#include <WrongAnimal.hpp>
#include <WrongCat.hpp>

int main()
{
    Cat i;
    Dog j;
    Animal human("human", "hola");
    Animal meta = human;
    std::cout << j.getType() << " " << std::endl;
    std::cout << i.getType() << " " << std::endl;
    std::cout << meta.getType() << " " << std::endl;
    i.makeSound(); //will output the cat sound!
    j.makeSound();
    meta.makeSound();

    WrongAnimal human2("human");
    WrongAnimal meta2;
    WrongCat i2;
    i2.makeSound();
    meta2.makeSound();

    /*
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << meta->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete i;
    delete j;

    const WrongAnimal* meta2 = new WrongAnimal();
    const WrongAnimal* i2 = new WrongCat();
    i2->makeSound();
    meta2->makeSound();
    delete meta2;
    delete i2;
    */
    return (0);
}