#include <iostream>
#include <string>

void convertToDouble(std::string argument)
{
	double number;
	try
	{
		number = stod(argument);
		std::cout.setf(std::ios::fixed);
		std::cout.precision(1);
		std::cout << "double: " << static_cast<double>(number) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "double: impossible" << std::endl;
	}
}

void convertToFloat(std::string argument)
{
	float number;
	try
	{
		number = stof(argument);
		std::cout.setf(std::ios::fixed);
		std::cout.precision(1);
		std::cout << "float: " << number << "f" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "float: impossible" << std::endl;
	}
	convertToDouble(argument);
}

void converter(std::string argument)
{
	int number;
	try
	{
		number = stoi(argument);
		if (number < 33 || number > 126)
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(number) << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(number) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" <<std::endl;
	}
	convertToFloat(argument);
}

int parserminimalniy(char *arg)
{
	int i = 0;
	std::string kk(arg);

	if (kk == "+inf" || kk == "-inf" || kk == "nan" || kk == "+inff" || kk == "-inff" || kk == "nanf")
		return(0);
	if (arg[0] == '+' || arg[0] == '-')
		++i;
	while (arg[i] != '\0')
	{
		if (isdigit(arg[i]) || arg[i] == '.')
			++i;
		else if (arg[i] == 'f' && arg[i + 1] == '\0')
			return(0);
		else
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" <<std::endl;
			std::cout << "float: impossible" << std::endl;
			std::cout << "double: impossible" <<std::endl;
			return (1);
		}
	}
	return (0);
}

int main(int argc, char **argv)
{
	std::string argument;
	
	if (argc != 2)
	{
		std::cout << "Error number of arguments" << std::endl;
		return (1);
	}
	if (parserminimalniy(argv[1]))
	 return (1);
	argument = argv[1];
	converter(argument);
	return 0;
}
