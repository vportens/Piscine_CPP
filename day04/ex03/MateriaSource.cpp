#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <iostream>

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)	
		slot[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & cpy) {
	*this = cpy;	
	for (int i = 0; i < 4; i++)	
		slot[i] = NULL;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
		{
			if (slot[i])
				delete slot[i];
		}
}

MateriaSource & MateriaSource::operator=(MateriaSource const & cpy) {
	for (int i = 0; i < 4; i++)
	{
			slot[i] = cpy.slot[i]->clone();
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* Magie) {
	for (int i = 0; i < 4; i++)
	{
		if (slot[i] == NULL)
		{
			slot[i] = Magie;
			std::cout << "new power unlock " << Magie->getType() << std::endl;
			return ;
		}		
	}
	std::cout << "can't learn more" << std::endl;
	
}

AMateria*	MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++)
	{
		if (slot[i] && slot[i]->getType() == type)
		{
			if (type == "ice")
			{
				return (new Ice);
			}
			if (type == "cure")
			return (new Cure);
		
		}
	} 
		
	std::cout << "you have to learn " << type << " before be able to use create it " << std::endl;
	return (0);
}
