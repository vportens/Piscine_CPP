#ifndef ROBOTOMYREQUESTFORM_H 
# define ROBOTOMYREQUESTFORM_H 

#include "Form.hpp"

class RobotomyRequestForm : public Form {
	public :	
		RobotomyRequestForm(std::string const & target);
		RobotomyRequestForm(RobotomyRequestForm const & cpy);
		virtual ~RobotomyRequestForm();
		
		RobotomyRequestForm & operator=(RobotomyRequestForm const & cpy); 

		void	Action(std::string const & target);
};


#endif
