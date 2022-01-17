#include "Cure.hpp"

Cure::Cure() {
	type = "cure";
}

Cure::Cure(Cure const & cpy) {
	*this = cpy;
}

Cure::~Cure() {

}

Cure & Cure::operator=(Cure const & cpy) {
	type = cpy.type;
	return (*this);
}

AMateria * Cure::clone() const {
	AMateria* cpy = new Cure(); 
	return cpy;
}
