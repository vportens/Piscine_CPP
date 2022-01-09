#include "Karen.hpp"

Karen::Karen() {

}

void	Karen::complain(std::string level) {
	
	std::string tab_complain[5] = {
	"DEBUG",
	"INFOS",
	"WARNING",
	"ERROR",
	"default"
	};

	for (int i = 0; i < 5; i++)
	{
		if (level == tab_complain[i] || i == 4)
		{
		switch	(i) {
		case 	0 :
			debug();
			std::cout << std::endl;
		case  	1 :	
			infos();
			std::cout << std::endl;
		case  	2 :
			warning();
			std::cout << std::endl;
		case 	3 :
			error();
			std::cout << std::endl;
			return ;
		default :
			classic();
			std::cout << std::endl;
			return ;
		}
		}
	}
}

void	Karen::debug( void ) {

	std::cout << "[ DEBUG ]" << std::endl;
	std::cout <<"I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::infos( void ) {

	std::cout << "[ INFOS ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::error( void ) { 

	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now."<< std::endl;
}

void	Karen::warning( void ) {

	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::classic( void ) {
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

Karen::~Karen() {

}
