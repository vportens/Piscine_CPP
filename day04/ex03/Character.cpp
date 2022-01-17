#include "Character.hpp"
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

Character::Character() : name("Default name") {
	for (int i = 0; i < 4; i++)
		slot[i] = NULL;
	index = 0;
}

Character::Character(std::string const & name) : name(name) {
	for (int i = 0; i < 4; i++)
		slot[i] = NULL;
	index = 0;
}

Character::Character(Character const & cpy) {
	for (int i = 0; i < 4; i++)
	{
		if (cpy.slot[i] == NULL)
			slot[i] = NULL;
		else
			slot[i] = cpy.slot[i]->clone(); 
	
	}
	name = cpy.getName();
}

Character::~Character() {
	for (int i = 0; i < 4; i++)
	{
		if (slot[i] != NULL)
			delete slot[i];
	}
}

Character* 	Character::operator=(Character const & cpy){
	for (int i = 0; i < 4; i++)
	{
		if (cpy.slot[i] == NULL)
			slot[i] = NULL;
		else
			slot[i] = cpy.slot[i]->clone(); 
	
	}
	name = cpy.getName();
	return (this);

}

std::string const& Character::getName() const {
	return (name);
}

void	Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++)	
	{
		if (slot[i] == NULL)
		{
			slot[i] = m;
			return ;
		}
	}
	std::cout << "Inventair full" << std::endl;
}	

void	Character::unequip(int idx) {
	slot[idx] = NULL;
	
}

void	Character::use(int idx, ICharacter & target) {
	if (idx > 3 || idx < 0)
		return ;
	if (slot[idx] == NULL)
	{
		std::cout << "nothing append" << std::endl;
		return ;
	}		
	slot[idx]->use(target);

}
