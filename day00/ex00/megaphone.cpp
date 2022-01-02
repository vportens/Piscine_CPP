#include <iostream>
#include <string>

int	main(int ac, char *av[])
{
	std::string 	s;

	if (ac == 1)
	{
		std::cout << "* LOUD AND ENBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < ac; i++)
	{
		s = av[i];
		for (unsigned int j = 0; j < s.length(); j++) std::cout << (av[i][j] = toupper(av[i][j]));
		(i < ac - 1 ? std::cout << " " : std::cout << std::endl);
	}
	return (0);
}
