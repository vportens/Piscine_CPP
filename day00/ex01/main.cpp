
#include <iostream>
#include "Contact.hpp"
#include "Phone_book.hpp"

Contact	add_contact(void)
{
	Contact bob;

	return (bob);
}

int	main(int ac, char *av[])
{
	char	buff[1096];
	std::string	add ("ADD");
	std::string	search ("SEARCH");
	std::string	exit ("EXIT");
	std::string	str;
	Phone_book	obj;

	while (1)
	{
		std::cout << "Are you looking for ADD, SEARCH, EXIT?" << std::endl;	
		std::cin >> buff;
		str = buff;
		if (str.compare(add) == 0)
		{
			
			add_contact();

		}
		else if (str.compare(exit) == 0)
			return (0);
		else if (str.compare(search) == 0)
		{

			std::cout << "search" << std::endl;
		}
		else
		{
			std::cout << "Invalide word, to run the phonebook use ADD, SEARCH or EXIT" << std::endl;	
		}
	}

}
