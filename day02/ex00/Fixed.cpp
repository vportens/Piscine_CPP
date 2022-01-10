#include "Fixed.hpp"
#include <iostream> 

Fixed::Fixed(void) :  _fixPoint(0) {

	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & cpy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;

}

Fixed&	Fixed::operator=( Fixed const & cpy) {
	std::cout << "Assignation operator called" << std::endl;
	this->_fixPoint = cpy.getRawBits();
	return *this;
}

int	Fixed::getRawBits( void )const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixPoint;
}

void	Fixed::setRawBits( int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixPoint = raw;

}
