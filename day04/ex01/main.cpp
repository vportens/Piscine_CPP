#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"


int main()
{
 Animal* meta = new Animal();
 Animal* j = new Dog();
 Animal* i = new Cat();

WrongAnimal	*k = new WrongCat();
WrongAnimal	*met = new WrongAnimal();

	Cat a = Cat();
	Cat* cpy = new Cat(a);

a.makeSound();
cpy->makeSound();

a.printmemori();
cpy.printmemori();

delete cpy;

std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();


std::cout << k->getType() << " " << std::endl;
k->makeSound();
met->makeSound();


	delete meta;
	delete j;
	delete i;
	delete k;
	delete met;
}
