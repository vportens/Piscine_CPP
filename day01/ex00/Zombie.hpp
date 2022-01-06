#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie {

	private :
		std::string	_name;

	public :
		void	annonce( void );
		Zombie(std::string name);
		~Zombie();
};


Zombie*	newZombie(std::string name);
void	randomChump( std::string name );

#endif

