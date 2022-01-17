#ifndef WRONGCAT_H
# define WRONGCAT_H

# include "WrongAnimal.hpp"

class WrongCat : virtual public WrongAnimal {
	public :
		WrongCat();
		WrongCat(WrongCat const & cpy);
		~WrongCat();

		WrongCat&	operator=(WrongCat const & cpy);

		void	makeSound();
}; 

#endif
