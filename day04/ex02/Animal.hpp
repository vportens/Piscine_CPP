#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal {
	protected :
		std::string type;
	public	:
		Animal();
		Animal(std::string type);
		Animal(Animal const & cpy);
		virtual ~Animal();

		Animal& operator=(Animal const & cpy);

		virtual void	makeSound() = 0;
		std::string			getType() const;
};

#endif
