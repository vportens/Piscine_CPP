#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap() {
	std::cout << "FragTrap default constructor" << std::endl;
	Name = "FragDefault";
	Hitpoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
}

FragTrap::FragTrap(std::string const & name) : ClapTrap(name) {
	std::cout << "FragTrap string constructor" << std::endl;
	Name = name;
	Hitpoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
}

FragTrap::FragTrap(FragTrap const & cpy) : ClapTrap(cpy) {
	*this = cpy;
	std::cout << "FragTrap cpy constructor" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & cpy) {
	this->Name = cpy.Name;	
	this->Hitpoints = cpy.Hitpoints;
	this->EnergyPoints = cpy.EnergyPoints;
	this->AttackDamage = cpy.AttackDamage;
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << "Destructor FragTrap" << std::endl;
}

void	FragTrap::highFivesGuys(void) {
	std::string buff;
	std::cout << "Hey Budi!! Give me that High Fives !!" << std::endl;
	std::cout << "select : yes or no" << std::endl;
	std::cin >> buff;
	if (buff == "no")
		return;
	else
	std::cout << "* claps *" << std::endl; 
}

