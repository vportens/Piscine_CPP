#include <iostream>

int	main(void)
{
	std::string	str("HI THIS IS BRAIN");
	std::string*	stringPTR;
	std::string&	stringREF = str;

	stringPTR = &str;

	std::cout << "Printing address" << std::endl;
	std::cout << "Address of string " << &str << std::endl;
	std::cout << "Address of pointer " << stringPTR << std::endl;
	std::cout << "Address of reference " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "Display the string" << std::endl;
	std::cout << "String using pointer < " << *stringPTR << " >" << std::endl;
	std::cout << "String using reference < " << stringREF << " >" << std::endl;
	



}
