#ifndef Phone_book_H
# define Phone_book_H

# include "Contact.hpp"

class Phone_book {

private:
	Contact lst[8];	

	int i;

public:
	Phone_book( void );

	
	void	add_contact(void);
	void	print_contact(void);

};

#endif
