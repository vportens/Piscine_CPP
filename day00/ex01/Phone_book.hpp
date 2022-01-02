#ifndef Phone_book_H
# define Phone_book_H

# include "Contact.hpp"

class Phone_book {

private:
	Contact lst[8];	
	static int i;


public:
	Phone_book( void )
	{
		for (int i=0; i < 8; i++)
			this->lst[i] = NULL;
		this->i = 0;
	}

};

#endif
