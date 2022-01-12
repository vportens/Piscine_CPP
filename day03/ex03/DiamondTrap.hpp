#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "ClapTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
	public : 
		//using FragTrap::Hitpoints;
		//using FragTrap::AttackDamage;
		//using ScavTrap::EnergyPoints;

		DiamondTrap();
		DiamondTrap(std::string const & name);
		DiamondTrap(DiamondTrap const & cpy);			
		virtual ~DiamondTrap();
	
		DiamondTrap& operator=(DiamondTrap const & cpY);
		void	stat();
		void	WhoAmI(void);
	private :
		std::string Name;	
};

#endif
