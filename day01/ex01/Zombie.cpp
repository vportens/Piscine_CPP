#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {
	
}


Zombie::Zombie(void) {

}

void	Zombie::is_name(std::string name) {
	this->_name = name;
}

void	Zombie::annonce(void) {
	std::cout << "<" << this->_name << ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void) {

	std::cout << "<" << this->_name << ">" <<  " i'm dyinggggg" << std::endl;
	std::cout << "what a pleonasme" << std::endl;
}

