#include "Karen.hpp"

Karen::Karen() {

}

void	Karen::complain(std::string level) {
	void	(Karen::*tab[])( void ) = {
		&Karen::debug,
		&Karen::infos,
		&Karen::error,
		&Karen::warning };
	
	std::string tab_complain[4] = {
	"debug",
	"infos",
	"error",
	"warning"
	};

	for (int i = 0; i < 4; i++)
	{
		void	(Karen::*selected_complain)( void ) = tab[i];
		if (level == tab_complain[i])
			(this->*selected_complain)();
	}
}

void	Karen::debug( void ) {

	std::cout <<"I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::infos( void ) {

	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::error( void ) { 

	std::cout << "This is unacceptable, I want to speak to the manager now."<< std::endl;
}

void	Karen::warning( void ) {

	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

Karen::~Karen() {

}
