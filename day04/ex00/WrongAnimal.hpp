#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

#include <iostream>
#include <string>

class WrongAnimal {
	protected :
		std::string type;
	public	:
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(WrongAnimal const & cpy);
		virtual ~WrongAnimal();

		WrongAnimal& operator=(WrongAnimal const & cpy);

		virtual void	makeSound() ;
		std::string			getType() const;
};

#endif
