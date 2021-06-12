#include <iostream>
#include "span.hpp"

int main()
{
	std::cout << "______-=Test1=-______" << std::endl;
	Span sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "______-=Test2=-______" << std::endl;
	Span sp2 = Span(1);
	try
	{
		sp2.addNumber(5);
		sp2.addNumber(3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "______-=Test3=-______" << std::endl;
	Span sp3 = Span(10000);
	for (int i = 0; i < 10000; ++i)
		sp3.addNumber((i + 3) * 2);
	std::cout << sp3.shortestSpan() << std::endl;
	std::cout << sp3.longestSpan() << std::endl;

	std::cout << "______-=Test4=-______" << std::endl;
	Span sp4 = Span(100);
	for (int i = 0; i < 50; ++i)
		sp4.addNumber((i + 3) * 2);
	sp4.addMore(7, 50);
	try
	{
		sp4.addMore(19, 50);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << sp4.shortestSpan() << std::endl;
	std::cout << sp4.longestSpan() << std::endl;
}

