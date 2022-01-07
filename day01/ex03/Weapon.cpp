#include "Weapon.hpp"


Weapon::Weapon(void){

}

const	std::string&	Weapon::getType( void ){
	return (this->_name);
}

Weapon::Weapon(std::string weapon) {
	this->setType(weapon);
}

void	Weapon::setType(std::string name) {
	this->_name = name;
}

Weapon::~Weapon(void){

}
