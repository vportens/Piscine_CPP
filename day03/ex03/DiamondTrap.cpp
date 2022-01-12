#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap() {
	std::cout << "DiamondTrap default constructor" << std::endl;
	ClapTrap::Name = Name + "_clap_name";
	this->Name = "DefaultDiamond";
	this->Hitpoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 30;
	
}

DiamondTrap::DiamondTrap(std::string const &name) : ClapTrap(name),FragTrap(name), ScavTrap(name) {
	std::cout << "DiamondTrap string constructor" << std::endl;
	ClapTrap::Name = name + "_clap_name";
	this->Name = name;
	this->Hitpoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 30;

	
}

DiamondTrap::DiamondTrap(DiamondTrap const & cpy) : ClapTrap(cpy), FragTrap(cpy), ScavTrap(cpy) {
	std::cout << "DiamondTrap cpy constructor" << std::endl;
	*this = cpy;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap destructor" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const & cpy) {
	this->Name = cpy.Name;	
	this->Hitpoints = cpy.Hitpoints;
	this->EnergyPoints = cpy.EnergyPoints;
	this->AttackDamage = cpy.AttackDamage;
	return (*this);

}

void	DiamondTrap::stat(void) {

} 

void	DiamondTrap::WhoAmI(void) {
	std::cout << ClapTrap::Name << std::endl;
	std::cout << Name << std::endl;
}
