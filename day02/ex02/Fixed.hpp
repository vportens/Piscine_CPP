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
		
		Fixed&	operator=( Fixed const & cpy);

		bool operator<( Fixed const & other );
		bool operator>( Fixed const & other );
		bool operator<=( Fixed const & other );
		bool operator>=( Fixed const & other );
		bool operator==( Fixed const & other );
		bool operator!=( Fixed const & other );

		Fixed	operator+( Fixed const & toAdd );
		Fixed	operator-( Fixed const & toSub );
		Fixed	operator*( Fixed const & toMul );
		Fixed	operator/( Fixed const & toDiv );

		Fixed	operator++();
		Fixed	operator++(int);

		Fixed	operator--();
		Fixed	operator--(int);


		static Fixed& 		min(Fixed& a, Fixed& b);
		static Fixed const&	min(Fixed const & a,Fixed const& b);
		static Fixed& 		max(Fixed& a, Fixed& b);
		static Fixed const&	max(Fixed const& a, Fixed const& b);

		int	getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int	toInt( void ) const;


};

std::ostream& operator<<(std::ostream &out, Fixed const & value );

#endif
