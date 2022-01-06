#include "Zombie.hpp"

int main(void)
{
	Zombie	bob = Zombie("bob");
	bob.annonce();
	
	Zombie* jim = newZombie("jim");
	jim->annonce();

	randomChump("francis");
	randomChump("ismael");
		

	delete jim;
}
