#include <iostream>
#include <limits.h>
#include <sstream>
#include <string>
#include <stdlib.h>
#include <cerrno>

int	is_limit(std::string str)
{
	std::string s1("nan");
	std::string s2("+inf");
	std::string s3("-inf");
	std::string s4("inf");
	std::string s5("-inff");
	std::string s6("+inff");
	std::string s7("nanf");

	if (str == s1 || str == s2 || str == s3 || str == s4 || str == s5 || str == s6 || str == s7)
		return (1);
	return (0);
}

void	convert_char(std::string str)
{
	int	i;
	
	if (str.length() == 1 && !isdigit(str[0]) && isprint(str[0]))
			i = str[0];
		else
			i = atoi(str.c_str());
		if (errno || i < 0 || i > 127 || is_limit(str))
			std::cout << "char: impossible" << std::endl;	
		else if (i < 32 || i == 127)
			std::cout << "char: Non displayable" << std::endl;
		
		else
			std::cout << "char: " << static_cast<char>(i) << std::endl;
}

void	convert_float(std::string str)
{
	float f;
	bool	precision;
	bool	num;
		
	precision = 0;
	num = 0;
	for (unsigned long i = 0; i < str.size(); i++)
	{
		if (str[i] == '.')
			precision = 1;	
		if (isdigit(str[i]) && str[i] != '0' && precision == 1)
			num = 1;
	}
	if (str.length() == 1 && !isdigit(str[0]) && isprint(str[0]))
		f = str[0];
	else
		f = atof(str.c_str());
	if (errno)
		std::cout << "float: impossible" << std::endl;
	else
	{
		std::cout << "float: " << static_cast<float>(f);
		if (num == 0 && is_limit(str) == 0)
			std::cout << ".0";
		std::cout  << "f" << std::endl;
	}
	
}

void	convert_double(std::string str)
{
	double d;
	if (str.length() == 1 && !isdigit(str[0]) && isprint(str[0]))
		d = str[0];
	else
		d = atof(str.c_str());
	if (errno)
		std::cout << "double: impossible" << std::endl;
	else
		std::cout << "double: " << static_cast<double>(d) << std::endl;


}

void	convert_int(std::string str)
{
	int i;
	
	if (str.length() == 1 && !isdigit(str[0]) && isprint(str[0]))
		i = str[0];
	else
		i = atoi(str.c_str());
	if (errno || is_limit(str))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(i) << std::endl;

}

int main(int ac, char *av[])
{
	if (ac != 2)
	{
		std::cout << "need 2 arg only" << std::endl;
		return (1);
	}
	std::string str(av[1]);
	convert_char(str);
	convert_int(str);
	convert_float(str);
	convert_double(str);
}
