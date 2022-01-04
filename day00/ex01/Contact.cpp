#include "Contact.hpp"
#include <iostream>

bool	Contact::is_digit(std::string& s)
{
	    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

void	Contact::add_contact(void) {
	std::string buff;
	
	std::cout << "Write the name of the new contact" << std::endl;
	std::getline (std::cin, buff);
	if (std::cin.eof())
		return ;
	this->first_name = buff;
	std::cout << "Last name please" << std::endl;
	std::getline (std::cin, buff);
	if (std::cin.eof())
		return ;
	this->last_name = buff;
	std::cout << "Know it's time for the real OG name of your homis" << std::endl;
	std::getline (std::cin, buff);
	if (std::cin.eof())
		return ;
	this->nickname = buff;
	std::cout << "Never forget he's lil secret in case you need services" << std::endl;
	std::getline (std::cin, buff);
	if (std::cin.eof())
		return ;
	this->secret = buff;
	std::cout << "Phone number please, in case you want pass a call" << std::endl;
	while (1)
	{
		std::getline (std::cin, buff);
		if (std::cin.eof())
			return ;
		if (this->is_digit(buff))
			break;
		std::cout << "Digit only for phonenumber" << std::endl;
	}
	this->phone_number = buff;


}


void	Contact::print_name(void) {
	int len;

	len = this->first_name.length();
	for (int i = 0; i + len < 10; i++)
		std::cout << " ";
	if (this->first_name.length() < 10)
		std::cout << this->first_name;
	else
	{
		for (int i = 0; i < 10 && this->first_name[i]; i++)
		{
			if (i == 9)
				std::cout << ".";
			else
			std::cout << this->first_name[i];

		}
	}
	std::cout << "|";

}

void	Contact::print_last(void) {
	int len;

	len = this->last_name.length();
	for (int i = 0; i + len < 10; i++)
		std::cout << " ";
	if (this->last_name.length() < 10)
		std::cout << this->last_name;
	else
	{
		for (int i = 0; i < 10 && this->last_name[i]; i++)
		{
			if (i == 9)
				std::cout << ".";
			else
			std::cout << this->last_name[i];

		}
	}
	std::cout << "|";

}

void	Contact::print_nick(void) {
	int len;

	len = this->nickname.length();
	for (int i = 0; i + len < 10; i++)
		std::cout << " ";
	if (this->nickname.length() < 10)
		std::cout << this->nickname;
	else
	{
		for (int i = 0; i < 10 && this->nickname[i]; i++)
		{
			if (i == 9)
				std::cout << ".";
			else
			std::cout << this->nickname[i];

		}
	}
	std::cout << "|" << std::endl;

}

void	Contact::print_inf(void) {
	std::cout << this->first_name << " " << this->last_name << " " << this->nickname << " " <<  this->phone_number << " " << std::endl << this->secret << std::endl;
}


