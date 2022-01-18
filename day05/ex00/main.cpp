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
}
