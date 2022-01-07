#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"

class	HumanA {
		private :
		std::string	_name;
		Weapon&	_weapon;

		public :
			HumanA(std::string name, Weapon& weapon);
			void	attack(void);
			~HumanA();

	
};

#endif
