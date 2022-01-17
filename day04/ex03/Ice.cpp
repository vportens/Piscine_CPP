#include "Ice.hpp"

Ice::Ice() {
	type = "ice";
}

Ice::Ice(Ice const & cpy) {
	*this = cpy;
}

Ice::~Ice() {

}

Ice & Ice::operator=(Ice const & cpy) {
	type = cpy.type;
	return (*this);
}

AMateria * Ice::clone() const {
	AMateria* cpy = new Ice(); 
	return cpy;
}
