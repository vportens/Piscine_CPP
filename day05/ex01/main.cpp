#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat jonny("Jonny", 0);
	}
	catch (Bureaucrat::Exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {

		Bureaucrat Bob("Bob", 12);
	}
	catch (Bureaucrat::Exception &e) {
		std::cout << e.what() << std::endl;
	}

	try	{
		Form bac("bac", 76, 76);
		Form jeu = bac;
		Bureaucrat Bob("Bob", 12);
		Bureaucrat Ron("Ron", 150);


		bac.beSigned(Bob);
		std::cout << "is bac sign: " << bac.is_sign() << std::endl;
		std::cout << "next" << std::endl;
		jeu.beSigned(Ron);
		std::cout << "next" << std::endl;
	}
	catch (Form::Exception &e) {
		std::cout << e.what() << std::endl;

	}

}
