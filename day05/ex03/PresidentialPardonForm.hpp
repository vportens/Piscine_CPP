#ifndef	PRESIDENTIALPARDONFORM_H 
# define PRESIDENTIALPARDONFORM_H 
class PresidentialPardonForm;
#include "Form.hpp"


class PresidentialPardonForm : public Form {
	public :	
		PresidentialPardonForm(std::string const & target);
		PresidentialPardonForm(PresidentialPardonForm const & cpy);
		virtual ~PresidentialPardonForm();
		
		PresidentialPardonForm & operator=(PresidentialPardonForm const & cpy); 

		void	Action(std::string const & target) const;
};


#endif
