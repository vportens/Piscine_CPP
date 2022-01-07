#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon {

	private :
		std::string	_name;

	public :
		const std::string&	getType( void );
		void				setType(std::string name);
		Weapon( void );
		Weapon(std::string name);
		~Weapon();
};

#endif
