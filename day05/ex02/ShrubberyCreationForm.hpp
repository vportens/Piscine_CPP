#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

#include "Form.hpp"

class ShrubberyCreationForm : public Form {
	public :	
		ShrubberyCreationForm(std::string const & target);
		ShrubberyCreationForm(ShrubberyCreationForm const & cpy);
		virtual ~ShrubberyCreationForm();
		
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & cpy); 

		void	Action(std::string const & target);
};


#endif
