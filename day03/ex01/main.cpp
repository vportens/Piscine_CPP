#include "ScavTrap.hpp"

int main()
{
	ScavTrap tourdecontrol;
	ScavTrap roger("roger");
	ClapTrap henry("Henry");

	henry.attack("job");
	roger.attack("tourDeControl");
	tourdecontrol.attack("none");
	tourdecontrol = roger;
	tourdecontrol.attack("ordinateur");

	ScavTrap job(roger);
	job.guardGate();
	
}
