#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
		try {
		std::string a = "bac";
		Bureaucrat	Bob("Bob", 1);
		Bureaucrat	Ron("Ron", 149);
		Intern		alphred;
		
		Form * lettre = alphred.makeForm("presidential pardon", "michel");
		if (lettre){
		lettre->beSigned(Bob);
		lettre->execute(Bob);			
		delete lettre;
		}

		Form* test = alphred.makeForm("permit de conduire", "moi");	
		if (test) {
		test->beSigned(Bob);
		test->execute(Bob);
		delete test;
		}
		
		Form* meca = alphred.makeForm("robotomy request", "c17");
		if (meca)
		{
		meca->beSigned(Bob);
		meca->execute(Bob);
		delete meca;
		}
		}
		catch (Form::Exception &e) {
			std::cout << e.what() << std::endl;
		}

}
