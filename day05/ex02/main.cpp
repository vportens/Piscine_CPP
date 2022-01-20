#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
		std::string a = "bac";
		Bureaucrat	Bob("Bob", 1);
		
		ShrubberyCreationForm bac(a);
		RobotomyRequestForm mecaHuman("Bob");
		bac.beSigned(Bob);
		bac.execution(Bob);
		mecaHuman.beSigned(Bob);
		mecaHuman.execution(Bob);

}
