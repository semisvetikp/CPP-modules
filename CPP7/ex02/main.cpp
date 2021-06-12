#include "Array.hpp"
#include <string>

int main(void)
{
	Array<int> intArray(5);
	Array<char> charArray(15);

	std::cout << intArray[2] << std::endl;
	std::cout << (int)charArray[2] << std::endl;

	try
	{
		int a = intArray[8];
		std::cout << a << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	Array<int> arrint(5);
	arrint[0] = 0;
	arrint[1] = 1;
	arrint[2] = 2;
	arrint[3] = 3;
	arrint[4] = 4;
	intArray = arrint;
	std::cout << intArray[0] << intArray[1]  << intArray[2] << intArray[3] << intArray[4] << std::endl;
	arrint[1] = 5;
	arrint[2] = 6;
	arrint[3] = 7;
	arrint[4] = 8;
	std::cout << intArray[0] << intArray[1]  << intArray[2] << intArray[3] << intArray[4] << std::endl;

	return(0);
}