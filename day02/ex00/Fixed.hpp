#ifndef	FIXED_H
# define FIXED_H

class	Fixed {
	private :
		int	_fixPoint;
		static const int	nbr_bits = 8;
	public :
		Fixed();
		~Fixed();
		Fixed(Fixed const& cpy);
		
		Fixed&	operator=( Fixed const & add);
		int	getRawBits( void ) const;
		void	setRawBits( int const raw );


};


#endif
