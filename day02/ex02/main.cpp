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


	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);
	a = Fixed(1234.4321f);
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;


	Fixed	add(Fixed(2) + Fixed(3.3f));
	std::cout << "2 + 3.3 =  " << add << std::endl;

	Fixed	sub(Fixed(2) - Fixed(3.3f));
	std::cout << "2 - 3.3 =  " << sub << std::endl;


	Fixed	mul(Fixed(2) * Fixed(3.3f));
	std::cout << "2 * 3.3 =  " << mul << std::endl;

	Fixed	div(Fixed(12) / Fixed(3));
	std::cout << "12 / 3 =  " << div << std::endl;

	Fixed come;
	std::cout << "Fixed come() as come :" << come << std::endl;
	std::cout << "++come :" << ++come << std::endl;
	std::cout << "come :" << come << std::endl;
	std::cout << "come++ :" << come++ << std::endl;
	std::cout << "come :" << come << std::endl;

	std::cout << "a > b? (a = 1234.4321, b = 10)" << std::endl;
	if (a > b)
		std::cout << "je valide la condition a > b" << std::endl;
	else
		std::cout << "je invalide a > b" << std::endl;
	std::cout << "a < b? (a = 1234.4321, b = 10)" << std::endl;
	if (a < b)
		std::cout << "je valide la conditon" << std::endl;
	else
		std::cout << "je invalide a < b" << std::endl;

	std::cout << "max(a,b) : " << Fixed::max(a, b) << std::endl;
	std::cout << "min(a, b) : " << Fixed::min(a, b) << std::endl;
}
