#include <iostream>
#include <fstream>
#include <string>
#include <string.h>

int main(int ac, char *av[])
{
	if (ac != 4)
	{
		std::cout << "need 3 arg :" << std::endl << "-name file you want search and replace" << std::endl << "- string to replace" << std::endl << "- replace by this string" << std::endl;
		return (1);
	}
	
	std::string	namefile = av[1];
	std::string	new_name = ".replace";
	new_name = namefile + new_name;
	
	int len = new_name.length();
	char replace_name[len + 1];

	strcpy(replace_name, new_name.c_str());	

	std::ifstream	ifs(av[1]);
	std::ofstream	ofs(replace_name);

	std::string	contents;
	std::string	s1 = av[2];
	std::string	s2 = av[3];

	std::string::size_type found;
	std::string::size_type	index;
	std::string	new_s;

	while (ifs)
	{
		std::getline(ifs, contents);
		found = contents.find(s1);
		if (found == std::string::npos) // valeur de found si aucun find()
			ofs << contents;
		else
		{
			index = 0;
			while (found < contents.size() && found != std::string::npos)
			{
				new_s = contents.substr(index, found - index);	// substr de a to b
				index = found ;
				index += s1.size();
				ofs << new_s << s2;
							
				found = contents.find(s1, index);
				
			}
			ofs << contents.substr(index, contents.size());	
		}
		if (ifs)
			ofs << std::endl;
	}

	ifs.close();
	ofs.close();
}
