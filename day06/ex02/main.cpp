#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <iostream>
#include <string>
#include <exception>
#include <time.h>

Base*	generate(void)
{

	int num = rand() % 3;

	if (num == 0)
		return (new A); 
	if (num == 1)
		return (new B); 
	if (num == 2)
		return (new C); 
	return (0);
}


void	identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A";
	else if (dynamic_cast<B *>(p))
		std::cout << "B";
	else if (dynamic_cast<C *>(p))
		std::cout << "C";
}

void 	identify(Base &p)
{
	Base tmp;
	try {
		tmp = dynamic_cast<A &>(p);
		std::cout << "A";
	}	
	catch (std::exception exp){}
	try {
		tmp = dynamic_cast<B &>(p);
		std::cout << "B";
	}	
	catch (std::exception exp){}
	try {
		tmp = dynamic_cast<C &>(p);
		std::cout << "C";
	}	
	catch (std::exception exp){}
}

int	main()
{
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		Base *bob= generate();

		std::cout << i << ": test; ";
		identify(bob);
		std::cout << ", ref: ";
		identify(*bob);
		std::cout << std::endl;
		delete bob;
	}
	return (0);	
}
