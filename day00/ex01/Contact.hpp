#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
class Contact {

	private :
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	secret;
		std::string	phone_number;
	
	public :
		void add_contact(void);
		void	print_name(void);
		void	print_last(void);
		void	print_nick(void);
		void	print_inf(void);
		bool	is_digit(std::string& other);

			
};

#endif
