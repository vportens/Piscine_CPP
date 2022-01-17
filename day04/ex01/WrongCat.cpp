#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()  {
	type = "WrongCat";
}


WrongCat::WrongCat(WrongCat const & cpy) : WrongAnimal(cpy) {
	*this = cpy;
}

WrongCat::~WrongCat() {

}

WrongCat&	WrongCat::operator=(WrongCat const & cpy) {
	this->type = cpy.type;
	return (*this);
}

void	WrongCat::makeSound(void) {
	std::cout<< "* Meuuuuu Meuuuu *" << std::endl;
}
