#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>


ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) : Form(target+"_shrubbery", 145, 137, "Default target") {
	_sign = 0;
	_target = target;
} 

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & cpy) : Form(cpy.getName() , 145, 137, "target"){
	_sign = cpy.is_sign();
	_target = cpy._target;
} 

ShrubberyCreationForm::~ShrubberyCreationForm() {

}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & cpy) {
	_sign = cpy.is_sign();
	return (*this);
}

void	ShrubberyCreationForm::Action(std::string const & target) {
	std::string filename = "_shrubbery";
	filename = getTarget() + filename;
	char const *test = filename.c_str();

	std::ofstream ofs(test);
	ofs 	<< "  ^" << std::endl;
	ofs	<< " /|\\" << std::endl;
	ofs	<< "  | " << std::endl;
	ofs.close();
	std::string lol = target;
	
}
