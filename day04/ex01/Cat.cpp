#include "Cat.hpp"

Cat::Cat() : Animal()  {
	type = "Cat";
	cerveau = new Brain;
	std::cout << "Default constructor Cat" << std::endl;
}


Cat::Cat(Cat const & cpy) : Animal(cpy) {
	cerveau = new Brain(*cpy.cerveau);
	type = cpy.type;
	std::cout << "Copy constructor Cat" << std::endl;
}

Cat::~Cat() {
	delete cerveau;
	std::cout << "destructor Cat" << std::endl;

}

Cat&	Cat::operator=(Cat const & cpy) {
	cerveau = new Brain;
	cerveau = cpy.cerveau;
	this->type = cpy.type;
	return (*this);
}

void	Cat::makeSound(void) {
	std::cout<< "* Miaou Miaou *" << std::endl;
}

void	Cat::printmemori(void) {
	std::cout << &cerveau << std::endl;
}
