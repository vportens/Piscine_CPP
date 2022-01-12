#include "FragTrap.hpp"

int	main()
{
	FragTrap jean;
	jean.attack("Arnold");

	FragTrap Batiste("Bat");
	Batiste.attack("Terminator");

	FragTrap Rom(Batiste);
	Rom.attack("Terminator");
	jean = Batiste;
	FragTrap y(jean);
	y.attack("Terminator");
	jean.attack("Terminator");
	std::cout << "Terminator is dead" << std::endl;
	jean.highFivesGuys();
}
