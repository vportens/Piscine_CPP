#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
		std::string a = "bac";
		Bureaucrat	Bob("Bob", 1);
		Bureaucrat	Ron("Ron", 149);
		Form *f = new ShrubberyCreationForm(a);
		Form *r = new ShrubberyCreationForm(a);
		try {
		

		f->beSigned(Bob);
		std::cout << "signature c'est bien passe" << std::endl;
		f->execute(Bob);
		std::cout << "execution c'est bien passe" << std::endl;
		r->beSigned(Bob);
		std::cout << "signature c'est bien passe" << std::endl;
		r->execute(Ron);
		std::cout << "execution c'est bien passe" << std::endl;
		}
		catch (Form::Exception &e) {
			std::cout << e.what() << std::endl;
		}
		try {
		std::cout << "second try" << std::endl;
		PresidentialPardonForm lettre("avoeu");
		RobotomyRequestForm mecaHuman("Bob");

		lettre.beSigned(Bob);
		std::cout << "lettre be signed by BOB" << std::endl;
		Bob.executeForm(lettre);
		std::cout << "BOB execute Form" << std::endl;

		mecaHuman.beSigned(Bob);
		std::cout << "Meca be signed by BOB" << std::endl;
		mecaHuman.execute(Bob);
		std::cout << "Meca be execu by BOB" << std::endl;
		
		lettre.execute(Ron);
		std::cout << "Form execute with rom" << std::endl;
		}
		catch (Form::Exception &e) {
			std::cout << e.what() << std::endl;
		}
			delete f;
			delete r;

}
