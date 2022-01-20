#include "Intern.hpp"
#include <string.h>
#include <iostream>
Intern::Intern() {

}

Intern::Intern(Intern const & cpy) {
	*this = cpy;
}

Intern::~Intern() {

}

Intern &	Intern::operator=(Intern const& cpy) {
	(void)cpy;	
	return (*this);	
}

Form*	Intern::makeForm(std::string const & name, std::string const & target) {
	std::string lst[4] = {"robotomy request", "presidential pardon", "shrubbery creation", "default"};
	for (int i = 0; i < 4; i++)
	{
		if (name == lst[i] || i == 3)
{
	switch (i) {
	case 0 :
		std::cout << "Intern creates " << name  << std::endl;
		return (new RobotomyRequestForm(target));
		break;
	case 1 :
		std::cout << "Intern creates " << name  << std::endl;
		return (new PresidentialPardonForm(target));
	case 2 :
		std::cout << "Intern creates " << name  << std::endl;
		return (new ShrubberyCreationForm(target));
		break;
	case 3 : 
		std::cout << "need a form I can create" << std::endl;
		return (0);
		break;
	}
}
	}
	return (0);
}
