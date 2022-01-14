#include "Cat.hpp"

Cat::Cat() : Animal()  {
	type = "Cat";
}


Cat::Cat(Cat const & cpy) : Animal(cpy) {
	*this = cpy;
}

Cat::~Cat() {

}

Cat&	Cat::operator=(Cat const & cpy) {
	this->type = cpy.type;
	return (*this);
}

void	Cat::makeSound(void) {
	std::cout<< "* Miaou Miaou *" << std::endl;
}
