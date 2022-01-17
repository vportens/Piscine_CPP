#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"

class Dog : virtual public Animal {
	private :
		Brain *cerveau;
	public :
		Dog();
		Dog(Dog const & cpy);
		~Dog();

		Dog&	operator=(Dog const & cpy);

		void	makeSound();
}; 

#endif
