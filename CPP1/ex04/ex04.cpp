#include <iostream>
#include <string>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &link = str;

	std::cout << *ptr << std::endl;
	std::cout << link << std::endl;
	return(0);
}