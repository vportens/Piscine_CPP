#include "Dog.hpp"

Dog::Dog(): Animal() {
	type = "Dog";
	cerveau = new Brain;
	std::cout << "Default constructor Dog" << std::endl;
}


Dog::Dog(Dog const & cpy) : Animal(cpy) {
	cerveau = new Brain;
	cerveau = cpy.cerveau;
	type = cpy.type;
	std::cout << "Copy constructor Dog" << std::endl;
}

Dog::~Dog() {
	delete cerveau;
	std::cout << "destructor Dog" << std::endl;
}

Dog&	Dog::operator=(Dog const & cpy) {
	cerveau = new Brain();
	cerveau = cpy.cerveau;
	this->type = cpy.type;
	return (*this);
}

void	Dog::makeSound(void) {
	std::cout<< "* Wouaf Wouaf *" << std::endl;
}
