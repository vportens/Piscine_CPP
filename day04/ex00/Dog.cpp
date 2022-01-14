#include "Dog.hpp"

Dog::Dog(): Animal() {
	type = "Dog";
}


Dog::Dog(Dog const & cpy) : Animal(cpy) {
	*this = cpy;
}

Dog::~Dog() {

}

Dog&	Dog::operator=(Dog const & cpy) {
	this->type = cpy.type;
	return (*this);
}

void	Dog::makeSound(void) {
	std::cout<< "* Wouaf Wouaf *" << std::endl;
}
