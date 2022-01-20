#include "MateriaSource.hpp"
#include "Character.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

#include <iostream>

int main()
{
	IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	 src->learnMateria(new Cure());
	Character* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	

	std::cout << tmp->getType() << std::endl;


	me->equip(tmp);
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);


	// tmp = src->createMateria("cure");

	Character* bob = new Character(*me);
	//bob->equip(tmp);

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(-5, *bob);
	me->use(999, *bob);
	me->use(3, *bob);

	me->unequip(0);
	me->unequip(0);

	me->use(0, *bob);


	delete bob;
	delete me;
	delete src;

	return 0;
}
