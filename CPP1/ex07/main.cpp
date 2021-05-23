#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib> 
#include <cstring>
#include <string.h>

int	handling_error(char **argv)
{
	int i;
	int k;

	i = 0;
	while (argv[i] != NULL)
		++i;
	if (i != 4)
	{
		std::cout << "Error number of arguments" << std::endl;
		return (1);
	}
	i = strlen(argv[2]);
	k = strlen(argv[3]);
	if (i == 0 || k == 0)
	{
		std::cout << "String can't be empty" << std::endl;
		return (1);	
	}
	return(0);
}

 
char* change_name(char *str)
{
	char 	*line;
	int  	i;
	int 	len;

	len = strlen(str) + 1 + 8;
	line = new char[len];
	for (i = 0; i < len - 8; ++i) 
		line[i] = str[i];
	line[len - 8] = '\0';
	line = strcat(line, ".replace");
	return (line);
}

int main(int argc, char **argv)
{
	char *namerepl;

	if (handling_error(argv))
		return (1);
	(void)argc;
	std::ifstream inf(argv[1]);
	std::string s1 = std::string(argv[2]);
	std::string s2 = std::string(argv[3]);
	int len1 = strlen(argv[2]);

	if (!inf)
	{
		std::cerr << "Uh oh, "<<  argv[1] <<" could not be opened for reading!" << std::endl;
		exit(1);
	}
	namerepl = change_name(argv[1]);
	std::ofstream outf(namerepl);
 	if (!outf)
	{
		std::cerr << "Uh oh, "<<  namerepl <<" could not be opened for writing!" << std::endl;
		exit(1);
	}
	while (inf)
	{
		std::string strInput;
		std::getline(inf, strInput);
		size_t foundIndex = strInput.find(s1);
  		if ( foundIndex == std::string::npos)
			outf << strInput << "\n";
		else 
		{
			std::string strFinal = strInput.substr(0, foundIndex) + s2 
			+ strInput.substr(foundIndex + len1, (strInput.length() - foundIndex - len1));
			foundIndex = strFinal.find(s1);
			if (foundIndex != std::string::npos)
				while (foundIndex != std::string::npos)
				{
					strFinal = strFinal.substr(0, foundIndex) + s2 
					+ strFinal.substr(foundIndex + len1, (strFinal.length() - foundIndex - len1));
					foundIndex = strFinal.find(s1);
				}
			outf << strFinal << "\n";
		}
	}
	delete namerepl;
	return 0;
}