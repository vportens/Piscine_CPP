#include <iostream>
#include <string>


template<typename T>
void	plusplus(T &a)
{
	a++;
}

template<typename T>
void	iter(T* a, int length, void (*f)(T &)) 
{
	for (int i = 0; i < length; i++)
	{
		f(a[i]);
	}
}


int main()
{
	int	a[6] = {1,2,3,4,5,6};
	double	b[6] = {6,5,4,3,2,1};

	std::cout << "First list before go throug founction iter"<< std::endl;
	for (int i = 0; i < 6; i++)
		std::cout << a[i] << std::endl;

	std::cout << "Second list before go throug founction iter"<< std::endl;
	for (int i = 0; i < 6; i++)
		std::cout << b[i] << std::endl;

	iter(a, 6, plusplus);
	iter(b, 6, plusplus);

	std::cout << "First list after go throug founction iter"<< std::endl;
	for (int j = 0; j < 6; j++)
		std::cout << a[j] << std::endl;
	std::cout << "Second list after go throug founction iter"<< std::endl;
	for (int j = 0; j < 6; j++)
		std::cout << b[j] << std::endl;
}
