#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"
# include <string>

class	FragTrap : virtual public ClapTrap {
	public :
		FragTrap();			
		FragTrap(std::string const & name);
		FragTrap(FragTrap const & cpy);
		virtual ~FragTrap();

		FragTrap& operator=(FragTrap const & cpy);
		virtual void	highFivesGuys(void);


};

#endif
