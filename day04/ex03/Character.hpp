#ifndef CHARACTER_H
# define CHARACTER_H

#include "ICharacter.hpp"

class Character : public ICharacter {
	private :
		AMateria*	slot[4];
		std::string	name;
		int		index;
	public :
		Character();
		Character(std::string const & name);
		Character(Character const & cpy);
		virtual		~Character();

		Character* 	operator=(Character const & cpy);

		std::string const &	getName() const;
		void			equip(AMateria* m);
		void			unequip(int idx);	
		void			use(int idx, ICharacter& target);
};

#endif
