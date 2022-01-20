#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <stdlib.h>

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) : Form(target, 25, 5, "Default target") {
	_sign = 0;
	_target = target;
} 

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & cpy) : Form(cpy.getName() , 25, 5, "target"){
	_sign = cpy.is_sign();
	_target = cpy._target;
} 

PresidentialPardonForm::~PresidentialPardonForm() {

}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & cpy) {
	_sign = cpy.is_sign();
	return (*this);
}

void	PresidentialPardonForm::Action(std::string const & target) const{
		std::cout << "<" << target << "> a ete pardonnee par Zafod Beeblebrox" << std::endl;
}
