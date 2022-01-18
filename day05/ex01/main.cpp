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
	try {
		Bureaucrat Ron("Ron", 150);
		std::cout << Ron.getName() << " grade " << Ron.getGrade() << std::endl;
		Ron.upGrade();
		std::cout << Ron.getName() << " grade " << Ron.getGrade() << std::endl;
		Ron.downGrade();
		std::cout << Ron.getName() << " grade " << Ron.getGrade() << std::endl;
		Ron.downGrade();
		std::cout << Ron.getName() << " grade " << Ron.getGrade() << std::endl;
	}

	catch (Bureaucrat::Exception &e) {
		std::cout << e.what() << std::endl;
	}
	try	{
		Form bac("bac", 76, 76);
		Bureaucrat Bob("Bob", 12);
		Bureaucrat Ron("Ron", 150);


		bac.beSigned(Bob);
		std::cout << "is bac sign: " << bac.is_sign() << std::endl;
		std::cout << "next" << std::endl;
		bac.beSigned(Ron);
		std::cout << "next" << std::endl;
	}
	catch (Form::Exception &e) {
		std::cout << e.what() << std::endl;

	}

}
