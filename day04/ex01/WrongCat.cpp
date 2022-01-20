#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()  {
	type = "WrongCat";
	std::cout << "Default WrongAnimal constructor" << std::endl;
}


WrongCat::WrongCat(WrongCat const & cpy) : WrongAnimal(cpy) {
	*this = cpy;
	std::cout << "Copy WrongAnimal constructor" << std::endl;
}

WrongCat::~WrongCat() {

	std::cout << "WrongAnimal destructor" << std::endl;
}

WrongCat&	WrongCat::operator=(WrongCat const & cpy) {
	this->type = cpy.type;
	return (*this);
}

void	WrongCat::makeSound(void) {
	std::cout<< "* Meuuuuu Meuuuu *" << std::endl;
}
