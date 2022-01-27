#include "Span.hpp"

int main()
{
	Span lst(6);
	try{
	lst.addNumber(1);
	lst.addNumber(2);
	lst.addNumber(4);
	lst.addNumber(6);
	lst.addNumber(7);
	lst.addNumber(9);
	lst.addNumber(9);
	lst.addNumber(9);
	}
	catch (Span::outOfRange &e)
	{
		std::cout << e.what() <<std::endl;
	}

	std::cout <<lst.shortestSpan() << std::endl;
	std::cout << lst.longestSpan() << std::endl;
	
	try {

	Span longlst(10000);
	std::vector<int> cp;

	for (size_t i = 0; i < 10000; i++)
	{
		cp.push_back(i * 2 + 1);
	}
	longlst.addNumber(cp.begin(), cp.end());
	std::cout << longlst.shortestSpan() << std::endl;
	std::cout << longlst.longestSpan() << std::endl;
	}
	catch (Span::outOfRange &e)
	{
		std::cout << e.what() <<std::endl;
	}

}
