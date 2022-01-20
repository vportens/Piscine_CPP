#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <stdlib.h>

RobotomyRequestForm::RobotomyRequestForm(std::string const & target) : Form(target, 72, 45, "Default target") {
	_sign = 0;
	_target = target;
} 

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & cpy) : Form(cpy.getName() , 72, 45, "target"){
	_sign = cpy.is_sign();
	_target = cpy._target;
} 

RobotomyRequestForm::~RobotomyRequestForm() {

}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & cpy) {
	_sign = cpy.is_sign();
	return (*this);
}

void	RobotomyRequestForm::Action(std::string const & target) const {
	std::cout << "* zzzzzzziiiiiiiiiiiipppppppppppp *" << std::endl;
	srand(time(NULL));
	if (rand() % 2)
{
		std::cout << "<" << target << "> a bien etait robotomizee" << std::endl;
}
	else
		std::cout << "robotomization failed" << std::endl;
}
