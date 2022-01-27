#ifndef EASYFIND_H
# define EASYFIND_H


#include <list>
#include <iostream>
#include <algorithm>
#include <exception>

template<typename T>
int	easyfind(T &obj, int to_find) {
	typename T::iterator it;	

	it = std::find(obj.begin(), obj.end(), to_find);
	if (it == obj.end())
	{
		std::cout << "integer not found" << std::endl;
		throw (std::exception());
	}
	return (*it);


}


#endif
