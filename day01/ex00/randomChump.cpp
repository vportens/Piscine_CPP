#include "Zombie.hpp"

void	randomChump(std::string name) {
	Zombie	new_z = Zombie(name);
	new_z.annonce();
}
