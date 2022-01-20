#ifndef INTERN_H
# define INTERN_H

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
	private :
		
	public :
		Intern();
		Intern(Intern const & cpy);
		virtual ~Intern();

		Intern &	operator=(Intern const & cpy);
		Form*	makeForm(std::string const& name, std::string const& target);
};

#endif
