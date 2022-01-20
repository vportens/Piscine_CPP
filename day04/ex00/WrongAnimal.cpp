#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	std::cout << "Default WrongAnimal constructor" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type){

	std::cout << "String WrongAnimal constructor" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & cpy) {
	*this = cpy;
	std::cout << "Copy WrongAnimal constructor" << std::endl;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal destructor" << std::endl;

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
