#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"
# include <string>

class	FragTrap : public ClapTrap {
	public :
		FragTrap();			
		FragTrap(std::string const & name);
		FragTrap(FragTrap const & cpy);
		virtual ~FragTrap();

		FragTrap& operator=(FragTrap const & cpy);
		
		void	highFivesGuys(void);


};

#endif
