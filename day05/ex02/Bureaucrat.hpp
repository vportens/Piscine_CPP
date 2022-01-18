#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat {
	private :
		std::string const	_name;
		int			_grade;	
	public :
		Bureaucrat();		
		Bureaucrat(std::string Name, int Grade);
		Bureaucrat(Bureaucrat const & cpy);		
		~Bureaucrat();

		Bureaucrat &	operator=(Bureaucrat const & cpy);
			
		std::string const	getName() const;	
		int			getGrade()const;
		void			upGrade();
		void			downGrade();
		void			signForm(Form to_sign);

		class Exception : public std::exception {
			public :
				virtual const char * what() const throw();

		};
		class	GradeTooHighException : public Bureaucrat::Exception {
			public :
				virtual const char * what() const throw();
		};
		class	GradeTooLowException : public Bureaucrat::Exception {
			public :
				virtual const char * what() const throw();

		};

};

std::ostream&	operator<<(std::ostream & out, Bureaucrat const & value);

#endif
