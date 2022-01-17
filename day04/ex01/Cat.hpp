#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"

class Cat : virtual public Animal {
	private :
		Brain *cerveau;
	public :
		Cat();
		Cat(Cat const & cpy);
		~Cat();

		Cat&	operator=(Cat const & cpy);

		void	makeSound();
		void	printmemori();
}; 

#endif
