#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
		private :
		AMateria* slot[4];

		public :
		MateriaSource();	
		MateriaSource(MateriaSource const & cpy);	
		virtual ~MateriaSource(); 

		MateriaSource&	operator=(MateriaSource const & cpy);

		virtual void		learnMateria(AMateria*);
		virtual AMateria* 	createMateria(std::string const & type);
};

#endif
