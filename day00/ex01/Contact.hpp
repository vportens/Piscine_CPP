#ifndef CONTACT_H
# define CONTACT_H

class Contact	{

	private :
		char	*first_name;
		char	*last_name;
		char	*nickname;
		char	*secret;
		char	*phone_number;
	
	public :
		Contact( void )
		{
			char	buff[1096];

			std::cout << "Write the name of the new contact" << std::endl;
			std::cin >> buff;
			this->first_name = buff;
			std::cout << "Last name please" << std::endl;
			std::cin >> buff;
			this->last_name = buff;
			std::cout << "Know it's time for the real OG name of your homis" << std::endl;
			std::cin >> buff;
			this->nickname = buff;
			std::cout << "Never forget he's lil secret in case you need services" << std::endl;
			std::cin >> buff;
			this->secret = buff;
			std::cout << "Phone number please, in case you want pass a call" << std::endl;
			std::cin >> buff;
			this->phone_number = buff;
		}


			
};

#endif
