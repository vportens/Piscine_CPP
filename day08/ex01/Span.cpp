#include "Span.hpp"

Span::Span(unsigned int n) {
	_max = n;
}

Span::Span() {
	_max = 0;
}


Span::Span(Span const & cpy) {
	*this = cpy;	
}


Span::~Span() {

}


void	Span::addNumber(int to_add)
{
	if (_array.size() < _max)
		_array.push_back(to_add);
	else
		throw (outOfRange());
}

void	Span::addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last) {
	while (first < last)
	{
		addNumber(*first);
		first++;
	}
} 

int	Span::shortestSpan() {
	if (_array.size() <= 1)
		throw (notEnoughArg());

	std::sort (_array.begin(), _array.end());

	int	diffMax = INT_MAX;
	std::vector<int>::iterator	it;

	
	for (it = _array.begin() + 1; it < _array.end(); it++)
	{
		if (*it - *(it - 1) < diffMax)
		{
			diffMax = *it - *(it - 1);
		}
	}
	return (diffMax);
	
}

int	Span::longestSpan() {
	if (_array.size() <= 1)
		throw (notEnoughArg());

	std::sort (_array.begin(), _array.end());
	return (*(_array.end() -1) - *(_array.begin()));

}

Span&	Span::operator=(Span const & cpy) {
	_max = cpy.getMax();
	_array = cpy._array;
	return (*this);
}

unsigned int	Span::getMax(void) const {
	return (_max);
}


const char * Span::outOfRange::what() const throw() {
	return  "Array full";

}

const char * Span::notEnoughArg::what() const throw() {
	return "Need at least two element in the array";
}
