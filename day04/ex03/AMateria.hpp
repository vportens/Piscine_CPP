#ifndef AMATERIA_H
# define AMATERIA_H

#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {
	protected :
		std::string	type;

	public :
	AMateria(std::string const & type);
	AMateria();
	AMateria(AMateria const & cpy);
	virtual ~AMateria();

	AMateria &	operator=(AMateria const & cpy);

	std::string const & getType() const;

	virtual AMateria* 	clone() const = 0;
	virtual void		use(ICharacter& target);
};

#endif
