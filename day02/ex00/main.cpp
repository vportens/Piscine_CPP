#include "Fixed.hpp"
#include <iostream> 

int main()
{
	Fixed	jean;
	Fixed	fred(jean);
	Fixed	bernard;

	bernard = fred;

	std::cout << jean.getRawBits() << std::endl;
	std::cout << fred.getRawBits() << std::endl;
	std::cout << bernard.getRawBits() << std::endl;
}
