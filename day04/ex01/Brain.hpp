#ifndef BRAIN_H
# define BRAIN_H

#include <string>
#include <iostream>

class Brain {
	protected :
		std::string *ideas;
	public	:
		Brain();
		~Brain();
		Brain(Brain const & cpy);

		Brain&	operator=(Brain const & cpy);

};

#endif
