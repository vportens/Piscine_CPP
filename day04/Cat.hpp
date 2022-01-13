#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"

class Cat : virtual public Animal {
	public :
		Cat();
		Cat(Cat const & cpy);
		~Cat();

		Cat&	operator=(Cat const & cpy);

		void	makeSound();
}; 

#endif
