#include "Fixed.hpp"
#include <iostream> 


Fixed::Fixed(void) :  _fixPoint(0) {

	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & cpy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

Fixed::Fixed(const int nbr) :  _fixPoint(nbr << Fixed::nbr_bits)  {
	std::cout << "Int constructor called" << std::endl;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float nbr) {
	std::cout << "Float constructor called" << std::endl;
	this->_fixPoint = roundf(nbr * (1 << Fixed::nbr_bits));
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;

}

Fixed&	Fixed::operator=( Fixed const & cpy) {
	std::cout << "Assignation operator called" << std::endl;
	this->_fixPoint = cpy.getRawBits();
	return *this;
}

std::ostream& operator<<(std::ostream & out, Fixed const &nbr)
{
	out << nbr.toFloat();
	return (out);
}

int	Fixed::getRawBits( void )const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixPoint);
}

void	Fixed::setRawBits( int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixPoint = raw;

}

float	Fixed::toFloat( void ) const{
	return ((float)this->_fixPoint / (float)(1 << Fixed::nbr_bits));
}

int	Fixed::toInt( void ) const {
	
	return (this->_fixPoint >> Fixed::nbr_bits);
}
