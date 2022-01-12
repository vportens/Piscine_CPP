#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class	ClapTrap {
	private :
		std::string 	Name;
		int		Hitpoints;
		int		EnergyPoints;
		int		AttackDamage;
	public :
		ClapTrap();
		virtual ~ClapTrap();
		ClapTrap(ClapTrap const & cpy);
		ClapTrap(std::string const & name);
		
		ClapTrap& operator=(ClapTrap const & cpy);
		void	attack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);


};

#endif
