#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	Weapon pelle;

	pelle.setType("pelle");
	std::cout << pelle.getType() <<std::endl;

	HumanA bob = HumanA("bob", pelle);

	bob.attack();
	
	Weapon*	fling = new Weapon;

	fling->setType("fling");

	HumanB alfred = HumanB("alfred");
	HumanB george = HumanB("george");

	george.setWeapon(pelle);
	alfred.attack();
	george.attack();

	delete fling;


	std::cout << std::endl << std::endl;
{
Weapon club = Weapon("crude spiked club");
HumanA bob("Bob", club);
bob.attack();
club.setType("some other type of club");
bob.attack();
}
{
Weapon club = Weapon("crude spiked club");
HumanB jim("Jim");
jim.setWeapon(club);
jim.attack();
club.setType("some other type of club");
jim.attack();

}
}
