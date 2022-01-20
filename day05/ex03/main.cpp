#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
		try {
		std::string a = "bac";
		Bureaucrat	Bob("Bob", 1);
		Bureaucrat	Ron("Ron", 149);
		
//		Form *f = new ShrubberyCreationForm(a);

//		f->beSigned(Bob);
//		f->execution(Bob);
		ShrubberyCreationForm bac(a);
		RobotomyRequestForm mecaHuman("Bob");
		bac.beSigned(Bob);
//		Bob.executeForm(bac);
		bac.execution(Ron);
		mecaHuman.beSigned(Bob);
		mecaHuman.execution(Bob);
		}
		catch (Form::Exception &e) {
			std::cout << e.what() << std::endl;
		}

}
