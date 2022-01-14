#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){

}

WrongAnimal::WrongAnimal(std::string type) : type(type){

}

WrongAnimal::WrongAnimal(WrongAnimal const & cpy) {
	*this = cpy;
}

WrongAnimal::~WrongAnimal(){

}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & cpy) {
		this->type = cpy.type;
	return (*this);
}

void	WrongAnimal::makeSound(void) {
	std::cout << "*no wrong sound make*" << std::endl;

}

std::string WrongAnimal::getType(void) const {
		return (type);
}
