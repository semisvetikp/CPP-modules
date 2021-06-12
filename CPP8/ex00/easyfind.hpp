#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>

template <typename T>
int easyfind(T cont, int n)
{
	typename T::const_iterator it;
	it = cont.begin();
	while (it != cont.end())
	{
		if (*it == n)
		{
			std::cout << "Yeh. I am find: " << n << std::endl;
			return(0);
		}
		++it;
	}
	std::cerr << n << " not found" <<  std::endl;
	return(-1);
}

#endif