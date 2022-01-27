#include "easyfind.hpp"
#include <set>

int main()
{
	try {
	std::set <int>tab;
	std::set <double>tab2;
	for (int i = 0; i < 20; i++)
	{
		tab.insert(i);
		tab2.insert(i + 5);
	}

	std::cout << easyfind(tab, 19) << std::endl;
	std::cout << easyfind(tab2, 19) << std::endl;
	std::cout << easyfind(tab, 22) << std::endl;
	std::cout << easyfind(tab2, 22) << std::endl;
	}

	catch (std::exception e)
	{
		std::cout << "exception" << std::endl;
	}
}
