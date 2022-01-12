#include "ScavTrap.hpp"

int main()
{
	ScavTrap tourdecontrol;
	ScavTrap roger("roger");
	roger.attack("tourDeControl");
	tourdecontrol.attack("none");
	tourdecontrol = roger;
	tourdecontrol.attack("ordinateur");
	
	ScavTrap last(tourdecontrol);
	last.attack("ecrant");
}
