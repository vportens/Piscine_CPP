#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

#include <deque>
#include <stack>

template<typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {
	public :
		MutantStack<T>() : std::stack<T, Container>() {};
		MutantStack<T>(MutantStack const & cpy) : std::stack<T, Container>(cpy) {};
		MutantStack<T> & operator=( MutantStack const & cpy) {
		*this = new std::stack<T, Container>(cpy);
		return (*this);
		};
		typedef typename std::stack<T, Container>::container_type::iterator iterator;	

		iterator begin() {return std::stack<T, Container>::c.begin();};
		iterator end() {return std::stack<T, Container>::c.end();};
		
		
	

};

#endif
