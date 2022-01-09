#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {

}

void	HumanB::setWeapon(Weapon weapon){
	_weapon = new Weapon(weapon.getType());
}

void	HumanB::attack( void ) {
	std::cout << _name << " attack with his ";
	if (_weapon == NULL)
		std::cout << "dot" << std::endl;
	else 
		std::cout << _weapon->getType() << std::endl;

}

HumanB::~HumanB() {
	if (_weapon)
		delete _weapon;
}
