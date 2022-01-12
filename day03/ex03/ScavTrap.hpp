#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	public :
		ScavTrap();			
		ScavTrap(std::string const & name);
		ScavTrap(ScavTrap const & cpy);
		virtual ~ScavTrap();

		ScavTrap& operator=(ScavTrap const & cpy);

		virtual void	guardGate(void);
		virtual void	attack(std::string const & target);	
	private :
};

#endif
