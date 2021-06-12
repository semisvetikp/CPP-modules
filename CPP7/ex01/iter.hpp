#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>
#include <string>

template <typename T>
void forstring(T const &mem)
{
	std::cout << mem + "ko" << std::endl;
}

template <typename T>
void forint(T const &mem)
{
	std::cout << (mem + 3) * 2 + 1 << std::endl;
}

template <typename T>
void myprint(T const &mem)
{
	std::cout << "This is " << mem << " member" << std::endl;
}

template <typename T>
void iter(T *array, int size, void (*f)(T const &))
{
	for (int i = 0; i < size; ++i)
		f(array[i]);
}

#endif