#ifndef CURE_H
# define CURE_H

#include "AMateria.hpp"

class Cure : public AMateria {
	public :
		Cure();
		Cure(Cure const & cpy);
		virtual ~Cure();

		Cure& operator=(Cure const & cpy);


		virtual AMateria* clone() const;	

};

#endif
