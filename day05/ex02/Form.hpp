#ifndef	FORM_H
# define FORM_H

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	protected :
		std::string const	_name;
		bool			_sign;
		int const		_gradeSign;
		int const		_gradeExec;
		std::string 		_target;
	public :
		Form();
		Form(Form const & cpy);
		Form(std::string Name, int GradeSign, int GradeExec, std::string target);
		~Form();

		Form & operator=(Form const & cpy);

		bool		is_sign()const;
		int		getGradeSign()const;
		int		getGradeExec()const;
		std::string	getName() const;
		std::string	getTarget()const ;

		void		execution(Bureaucrat const & executor);
		virtual void	Action(std::string const & target) = 0;

		void		beSigned(Bureaucrat & inCharge);

		class Exception : public std::exception {
			public :
				virtual const char * what() const throw();
		};
		class GradeTooHighException : public Form::Exception {
			public :
				virtual const char * what() const throw();
		};
		class GradeTooLowException : public Form::Exception {
			public :
				virtual const char * what() const throw();
		};
};

std::ostream&	operator<<(std::ostream & out, Form const & value);

#endif
