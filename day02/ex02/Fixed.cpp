#include "Fixed.hpp"
#include <iostream> 


Fixed::Fixed(void) :  _fixPoint(0) {

}

Fixed::Fixed(Fixed const & cpy) {
	*this = cpy;
}

Fixed::Fixed(const int nbr) :  _fixPoint(nbr << Fixed::nbr_bits)  {
}

Fixed::Fixed(const float nbr) {
	this->_fixPoint = roundf(nbr * (1 << Fixed::nbr_bits));
}

Fixed::~Fixed( void ) {

}

Fixed&	Fixed::operator=( Fixed const & cpy) {
	this->_fixPoint = cpy.getRawBits();
	return *this;
}

std::ostream& operator<<(std::ostream & out, Fixed const &nbr)
{
	out << nbr.toFloat();
	return (out);
}

bool	Fixed::operator<( Fixed const & other) {
	if (this->getRawBits() < other.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>( Fixed const & other) {
	if (this->getRawBits() > other.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=( Fixed const & other) {
	if (this->getRawBits() >= other.getRawBits())
		return (true);
	return (false);
}


bool	Fixed::operator<=( Fixed const & other) {
	if (this->getRawBits() <= other.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator==( Fixed const & other) {
	if (this->getRawBits() == other.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=( Fixed const & other) {
	if (this->getRawBits() != other.getRawBits())
		return (true);
	return (false);
}

Fixed	Fixed::operator+( Fixed const & toAdd) {
	Fixed creat(*this);
	creat.setRawBits(creat.getRawBits() + toAdd.getRawBits()); 
	return (creat);
}

Fixed	Fixed::operator-( Fixed const & toSub) {
	Fixed creat(*this);
	creat.setRawBits(creat.getRawBits() - toSub.getRawBits()); 
	return (creat);
}

Fixed	Fixed::operator*( Fixed const & toMul) {
	Fixed creat(*this);
	creat.setRawBits((creat.getRawBits() * toMul.getRawBits()) / (1 << Fixed::nbr_bits)); 
	return (creat);
}

Fixed	Fixed::operator/( Fixed const & toDiv) {
	Fixed creat(*this);
	creat.setRawBits((creat.getRawBits() * (1 << Fixed::nbr_bits)) / toDiv.getRawBits()); 
	return (creat);
}

Fixed	Fixed::operator++() {
	this->_fixPoint++;
	return (*this);
}

Fixed	Fixed::operator++( int ) {
	Fixed	inc(*this);
	operator++();
	return (inc);
}

Fixed	Fixed::operator--() {
	this->_fixPoint--;
	return (*this);
}


Fixed	Fixed::operator--(int) {
	Fixed	sub(*this);
	operator--();
	return (*this);
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
	if (a < b)
		return (a);
	return (b);
}

Fixed const& Fixed::min(Fixed const& a, Fixed const& b) {
	Fixed tmp;

	tmp = a;
	if (tmp > b)
		return (b);
	return (a);
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
	if (a < b)
		return (b);
	return (a);
}

Fixed const& Fixed::max(Fixed const& a, Fixed const& b) {
	Fixed tmp;

	tmp = a;
	if (tmp < b)
		return (b);
	return (a);
}

int	Fixed::getRawBits( void )const {
	return (this->_fixPoint);
}

void	Fixed::setRawBits( int const raw) {
	this->_fixPoint = raw;

}

float	Fixed::toFloat( void ) const{
	return ((float)this->_fixPoint / (float)(1 << Fixed::nbr_bits));
}

int	Fixed::toInt( void ) const {
	
	return (this->_fixPoint >> Fixed::nbr_bits);
}
