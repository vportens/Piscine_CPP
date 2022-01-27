#ifndef SPAN_H
# define SPAN_H

#include <vector>
#include <iostream>
#include <climits>
#include <algorithm>

class Span {
	public :
		Span(unsigned int);
		Span();
		Span(Span const & cpy);
		virtual ~Span();

	Span& 	operator=(Span const & cpy);

	void	addNumber(int n);
	void	addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end);	
	int	shortestSpan(void);
	int	longestSpan(void);

	unsigned int		getMax() const;

	class outOfRange : public std::exception{
	public :
		const char * what() const throw();
	};
	
	class notEnoughArg : public std::exception {
	public :
		const char * what() const throw();	
	}; 

	private :
	unsigned int 		_max;
	std::vector<int>	 _array;

};

#endif
