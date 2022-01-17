#include "Animal.hpp"

Animal::Animal(){

	std::cout << "Default constructor Animal" << std::endl;
}

Animal::Animal(std::string type) : type(type){

	std::cout << "String constructor Animal" << std::endl;
}

Animal::Animal(Animal const & cpy) {
	*this = cpy;
	std::cout << "Copy constructor Animal" << std::endl;
}

Animal::~Animal(){

	std::cout << "destructor Animal" << std::endl;
}

Animal & Animal::operator=(Animal const & cpy) {
	this->type = cpy.type;
	return (*this);
}

void	Animal::makeSound(void) {
	std::cout << "*no sound make*" << std::endl;

}

std::string Animal::getType(void) const {
		return (type);
}
