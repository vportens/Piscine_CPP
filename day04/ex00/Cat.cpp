#include "Cat.hpp"

Cat::Cat() : Animal()  {
	type = "Cat";
	std::cout << "Default Cat constructor" << std::endl;
}


Cat::Cat(Cat const & cpy) : Animal(cpy) {
	*this = cpy;
	std::cout << "Copy Cat constructor" << std::endl;
}

Cat::~Cat() {

	std::cout << "Cat destructor" << std::endl;
}

Cat&	Cat::operator=(Cat const & cpy) {
	this->type = cpy.type;
	return (*this);
}

void	Cat::makeSound(void) {
	std::cout<< "* Miaou Miaou *" << std::endl;
}
