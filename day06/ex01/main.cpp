#include <iostream>
#include <stdint.h>

struct Data { std::string str; int nbr; };

uintptr_t serialize(Data *ptr)
{
	uintptr_t ser = reinterpret_cast<uintptr_t>(ptr);
	return ser;
}

Data* deserialize(uintptr_t ser)
{
	Data* des = reinterpret_cast<Data *>(ser);
	return des;
}

int	main()
{
	Data *ptr = new Data;
	ptr->str = "baguette";
	ptr->nbr = 75000;

	std::cout << "Before anything : Data { " << std::endl;
	std::cout << ptr->str << std::endl;
	std::cout << ptr->nbr << std::endl;
	std::cout << "}" << std::endl;
	
	std::cout << "Call Serialize()" << std::endl;
	uintptr_t ser = serialize(ptr);

	std::cout << "Call Deserialize()" << std::endl;
	Data *des = deserialize(ser);
	std::cout << des->str << "; " << des->nbr << std::endl;
}
