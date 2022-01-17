#include "Brain.hpp"

Brain::Brain() {
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "moi avoir idee";
	std::cout << "Default constructor Brain" << std::endl;
}

Brain::~Brain() {
	delete [] ideas;	
	std::cout << "destructor Brain" << std::endl;
}

Brain::Brain(Brain const & cpy) {
	ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		ideas[i] = cpy.ideas[i];
	std::cout << "Copy constructor Brain" << std::endl;
}

Brain & Brain::operator=(Brain const & cpy) {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = cpy.ideas[i];
	return (*this);
}
