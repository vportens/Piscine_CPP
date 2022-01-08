#ifndef KAREN_H
# define KAREN_H

#include <iostream>

class Karen {
	private :
		void	debug( void );
		void	infos( void );
		void	error( void );
		void	warning( void );
	public :
		Karen();
		void	complain(std::string level);
		~Karen();

};

#endif
