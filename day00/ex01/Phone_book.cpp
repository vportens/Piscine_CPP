#include "Phone_book.hpp"
#include <iostream>
#include <sstream>

Phone_book::Phone_book(void) {
//	for (int i=0; i < 8; i++)
//	this->lst[i] = NULL;
	this->i = 0;

}

void	Phone_book::add_contact(void) {
	if (this->i >= 8)
	{
		std::cout << "PhoneBook full" << std::endl;
	}
	else {
	this->lst[this->i].add_contact();
	this->i += 1;
	
	}
}

void	Phone_book::print_contact(void) {
	int	i;
	std::string	buff;

	i = 0;
	while (i < this->i)
	{
		std::cout << "|         " << i<< "|";

		this->lst[i].print_name();
		this->lst[i].print_last();
		this->lst[i].print_nick();
		i++;

	}
	std::cout << "quel conctact souhaitez vous acceder" << std::endl;
	while (1)
	{
		std::getline (std::cin,buff);

	if (buff.length() == 1 && buff[0] >= '0' && buff[0] <= '9')
	{
		int	nbr;
		std::istringstream(buff) >> nbr;
		if (nbr < this->i)	
		{
			this->lst[nbr].print_inf();	
		return ;
		}
		else
		std::cout << "try again with number bettwen 0 and " << this->i - 1 << std::endl;
	}
	else
		std::cout << "try again with number bettwen 0 and " << this->i - 1 <<  std::endl;
	}



}
