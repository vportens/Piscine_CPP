#include "Karen.hpp"

int main(int ac, char *av[])
{
	Karen karen;

	if (ac == 1)
{
		std::cerr << "Look there is a Karen in the wild, don't make noise or she will see use end start complaining at us" << std::endl;
		return (1);
}
	if (ac > 2)
{
	std::cerr << "To much comment from Karen, we can't treat this much informations" << std::endl;
	return (1);
}
	karen.complain(av[1]);
	

}
