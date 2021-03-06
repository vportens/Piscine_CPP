#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {

	std::cout << "ScavTrap default constructor" << std::endl;
	Name = "ScavDefault";
	Hitpoints = 100;
	EnergyPoints =  50;
	AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string const & name) : ClapTrap(name) {
	Hitpoints  = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
	std::cout << "ScavTrap string constructor" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & name) : ClapTrap(name) {
	*this = name;
	std::cout << "ScavTrap copy  constructor" << std::endl;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "destructor ScavTrap call" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & cpy){
	this->Name = cpy.Name;
	this->Hitpoints = cpy.Hitpoints;
	this->EnergyPoints = cpy.EnergyPoints;
	this->AttackDamage = cpy.AttackDamage;
	return (*this);
}

void	ScavTrap::attack(std::string const & name) {
	std::cout << "ScavTrap <" << Name << "> have attack "<< name << " this dommage:" << AttackDamage << std::endl;
}

void	ScavTrap::guardGate(void) {
	std::cout << "ScavTrap <" << Name << "> enterred in Gate keeper mode" << std::endl;
}
