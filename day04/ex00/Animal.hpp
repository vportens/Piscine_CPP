#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>
#include <string>

class Animal {
	protected :
		std::string type;
	public	:
		Animal();
		Animal(std::string type);
		Animal(Animal const & cpy);
		virtual ~Animal();

		Animal& operator=(Animal const & cpy);

		virtual void	makeSound() ;
		std::string			getType() const;
};

#endif
