#include "Dog.hpp"

Dog::Dog(): Animal() {
	type = "Dog";
	std::cout << "Default Dog constructor" << std::endl;
}


Dog::Dog(Dog const & cpy) : Animal(cpy) {
	*this = cpy;
	std::cout << "Copy Dog constructor" << std::endl;
}

Dog::~Dog() {

	std::cout << "Dog destructor" << std::endl;
}

Dog&	Dog::operator=(Dog const & cpy) {
	this->type = cpy.type;
	return (*this);
}

void	Dog::makeSound(void) {
	std::cout<< "* Wouaf Wouaf *" << std::endl;
}
