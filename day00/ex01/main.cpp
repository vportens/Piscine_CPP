
#include <iostream>
#include "Contact.hpp"
#include "Phone_book.hpp"


int	main(void)
{
	std::string	buff;
	std::string	add ("ADD");
	std::string	search ("SEARCH");
	std::string	exit ("EXIT");
	std::string	str;
	Phone_book	obj;

	while (1)
	{
		std::cout << "Are you looking for ADD, SEARCH, EXIT?" << std::endl;	
		std::getline (std::cin,buff);
		if (std::cin.eof())
			return (1);
		str = buff;
		if (str.compare(add) == 0)
		{
			
			obj.add_contact();

		}
		else if (str.compare(exit) == 0)
			return (0);
		else if (str.compare(search) == 0)
		{


			obj.print_contact();
		}
		else
		{
			std::cout << "Invalide word, to run the phonebook use ADD, SEARCH or EXIT" << std::endl;	
		}
	}

}
