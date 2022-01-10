#ifndef	FIXED_H
# define FIXED_H

#include <cmath>
#include <ostream>
class	Fixed {
	private :
		int	_fixPoint;
		static const int	nbr_bits = 8;
	public :
		Fixed();
		~Fixed();
		Fixed(Fixed const& cpy);
		Fixed(const int);
		Fixed(const float);
		
		Fixed&	operator=( Fixed const & add);
		int	getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int	toInt( void ) const;


};

std::ostream& operator<<(std::ostream &out, Fixed const & value );

#endif
