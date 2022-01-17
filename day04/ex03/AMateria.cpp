#include <iostream>
#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : type(type) {

}

AMateria::AMateria() : type("Default type") {

}

AMateria::AMateria(AMateria const & cpy) {
	*this = cpy;
}

AMateria::~AMateria() {

}

AMateria & AMateria::operator=(AMateria const & cpy) {
	type = cpy.type;
	return (*this);

}

std::string const & AMateria::getType(void) const {
	return (type);
}

void	AMateria::use(ICharacter& target) {
	if (getType() == "ice")		
		std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;

	if (getType() == "cure")		
		std::cout << "* heals " << target.getName() << "'s wounds" << std::endl; 
}

