#include "ClapTrap.hpp"

int	main()
{
	ClapTrap bob;
	ClapTrap jean("jean");
	
	jean.attack("gotaga");
	jean.takeDamage(18);
	jean.beRepaired(100);

	bob = jean;
	bob.attack("TheFrenchMonster");

	ClapTrap doig(bob);
	doig.takeDamage(20);
	
}
