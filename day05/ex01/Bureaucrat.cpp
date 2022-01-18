#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default Name"), _grade(75) {
	std::cout << "Default constructor" << std::endl;	
}

Bureaucrat::Bureaucrat(std::string Name, int Grade) : _name(Name) {
	std::cout << "Classic constructor" << std::endl;	
	if (Grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	if (Grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else
		_grade = Grade;
	std::cout << "Constructor end" << std::endl;	

}

Bureaucrat::Bureaucrat(Bureaucrat const & cpy) : _name(cpy.getName()), _grade(cpy.getGrade()) {

	std::cout << "Copy constructor" << std::endl;	
}

Bureaucrat::~Bureaucrat() {

	std::cout << "destructor" << std::endl;	
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & cpy) {
	_grade = cpy.getGrade();
	return (*this);
}

std::string const	Bureaucrat::getName(void) const {
	return (_name);
}

int		Bureaucrat::getGrade() const{
	return (_grade);
}

void		Bureaucrat::signForm(Form to_sign) {
	
	if (_grade < to_sign.getGradeSign())
		std::cout << getName() << " signs " << to_sign.getName() << std::endl;
	else
		std::cout << getName() << " cannot sign because is grade to low" << std::endl;
}

void		Bureaucrat::upGrade(void) {
	if (_grade - 1 < 1)
		throw (Bureaucrat::GradeTooHighException());
	_grade--;
}

void		Bureaucrat::downGrade(void) {
	if (_grade + 1 > 150)
		throw (Bureaucrat::GradeTooLowException());
	_grade++;
}

std::ostream&	operator<<(std::ostream & out, Bureaucrat const & me) {
	out << "<" <<  me.getName() << ">,  bureaucrat grade <" << me.getGrade() << ">";
	return (out);
} 


const char* Bureaucrat::Exception::what() const throw() {
	return ("Bureaucrat Execption");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade must be <= 150 !!!");
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade must be >= 1 !!!");
}
