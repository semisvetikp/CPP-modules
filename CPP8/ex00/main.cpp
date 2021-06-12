#include "easyfind.hpp"
#include <array>
#include <vector>

int main(void)
{
	std::array<int, 7> arr = {5, 8, 9, 10, 12, 5, 9};
	std::vector<int> vect;
	for (int count=0; count < 5; ++count)
        vect.push_back(10 - count);

	int a = 5;
	std::cout << "Array:" <<  std::endl;
	easyfind(arr, a);
	std::cout << "\nVector:" <<  std::endl;
	easyfind(vect, a);

	return 0;
}