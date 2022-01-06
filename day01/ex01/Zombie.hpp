#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie {

	private :
		std::string	_name;

	public :
		void	annonce( void );
		void	is_name(std::string name);
		Zombie(std::string name);
		Zombie( void );
		~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif

