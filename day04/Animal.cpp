#include "Animal.hpp"

Animal::Animal(){

}

Animal::Animal(std::string type) : type(type){

}

Animal::Animal(Animal const & cpy) {
	*this = cpy;
}

Animal::~Animal(){

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