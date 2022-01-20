#include "Form.hpp"

Form::Form() : _name("Default Form"), _sign(0), _gradeSign(75), _gradeExec(75), _target("Default target") {

}

Form::Form(Form const & cpy) : _name(cpy.getName()), _gradeSign(cpy.getGradeSign()), _gradeExec(cpy.getGradeExec()), _target(cpy.getTarget()){
	_sign = cpy.is_sign();
}

Form::Form(std::string Name, int GradeSign, int GradeExec, std::string target) : _name(Name), _sign(0), _gradeSign(GradeSign), _gradeExec(GradeExec) , _target(target){
	if (GradeExec > 150 || GradeSign > 150)
		throw (Form::GradeTooLowException());

	if (GradeExec < 1 || GradeSign < 1)
		throw (Form::GradeTooHighException());
}

Form::~Form() {

}

Form & Form::operator=(Form const & cpy) {
	_sign = cpy.is_sign();
	return (*this);
}

bool	Form::is_sign(void)const {
	return (_sign);
}

int	Form::getGradeSign(void) const{
	return (_gradeSign);
}

int	Form::getGradeExec(void) const{
	return (_gradeExec);
}

std::string	Form::getName(void)const {
	return (_name);
}


std::string Form::getTarget(void) const{
	return (_target);
}

void	Form::execution(Bureaucrat const & executor) const{
	if (is_sign() == 0)
	{
		throw (Form::NotSignedException());
		return ;
	}
	if (executor.getGrade() > getGradeExec())
	{
		throw (Form::GradeTooLowExecException());
		return ;
	}
	Action(_target);
}

void	Form::beSigned(Bureaucrat & inCharge) {
	if (inCharge.getGrade() <= _gradeSign)
	{
		_sign = 1;
	}
	else
	{
		throw (Form::GradeTooLowException());
	}
		
}

std::ostream&	operator<<(std::ostream &out, Form const & me) {
	out << "<" << me.getName() << "> form grade sign <" << me.getGradeSign() << "> grade Exec <" << me.getGradeExec() << ">";
	return (out); 
}

const char* Form::Exception::what() const throw() {
	return ("Form Execption");
}

const char* Form::GradeTooLowException::what() const throw() {
	return ("Bureaucrat to low grade to sign this Form!!!");
}

const char* Form::GradeTooHighException::what() const throw() {
	return ("Grade must be >= 1 !!!");
}

const char* Form::NotSignedException::what() const throw() {
	return ("Form not Signed!!!");
}

const char* Form::GradeTooLowExecException::what() const throw() {
	return ("Grade too low to exec form!!!");
}
