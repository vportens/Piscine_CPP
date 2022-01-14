#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"

class Dog : virtual public Animal {
	public :
		Dog();
		Dog(Dog const & cpy);
		~Dog();

		Dog&	operator=(Dog const & cpy);

		void	makeSound();
}; 

#endif
