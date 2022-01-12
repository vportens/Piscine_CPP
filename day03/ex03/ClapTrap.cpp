#include "ClapTrap.hpp"
#define HP 10
#define EP 10
#define AD 0

ClapTrap::ClapTrap(void) : Name("HenryDefault"), Hitpoints(HP), EnergyPoints(EP), AttackDamage(AD) {
	std::cout << "default constructor call" << std::endl;
}

ClapTrap::ClapTrap(std::string const &name) : Name(name), Hitpoints(HP), EnergyPoints(EP), AttackDamage(AD) {
	std::cout << "string constructor call" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & cpy) {
	std::cout << "copy constructor call" << std::endl;
	*this = cpy;
}

ClapTrap::~ClapTrap() {
	std::cout << "destructor call" << std::endl;
}

void	ClapTrap::attack(std::string const & target) {
	EnergyPoints--;	
	std::cout << "ClapTrap <" << Name << "> attack <" << target << ">, causing <" << AttackDamage << "> points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	Hitpoints -= amount;
	std::cout << "ClapTrap <" << Name << "> as been attack and lost <" << amount << "> Hitpoints, now have <" << Hitpoints << ">" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	Hitpoints += amount;
	std::cout << "ClapTrap <" << Name << "> as been heal and gain <" << amount << "> Hitpoints, now have <" << Hitpoints << ">" << std::endl;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const & cpy) {
	this->Name = cpy.Name;
	this->Hitpoints = cpy.Hitpoints;
	this->EnergyPoints = cpy.EnergyPoints;
	this->AttackDamage = cpy.AttackDamage;
	return (*this);
}

