#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name ) {
	Zombie* new_horde = new Zombie[n];
	for (int i = 0; i < n; i++)
	{
		new_horde[i].is_name(name);
		new_horde[i].annonce();
	}
	return (new_horde);

}
