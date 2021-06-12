#include <iostream>
#include <string>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	std::srand(time(0));
	int k = std::rand() % 3;
	std::cout << "random number is: " << k + 1 << std::endl;
	Base *cls;
	cls = NULL;
	if (k == 0)
		cls = new A;
	else if (k == 1)
		cls = new B;
	else if (k == 2)
		cls = new C;	
	return(cls);
}

void identify_from_pointer(Base * p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "This is pointer to class A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "This is pointer to class B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "This is pointer to class C" << std::endl;
}

void identify_from_reference( Base & p)
{
	try {
		A &a = dynamic_cast<A&>(p);
		std::cout << "This is reference to class A" << std::endl;
		(void)a;
	}
	catch (std::exception &e) 
	{
		std::cerr << e.what() << '\n';
	}
	try {
		B &b = dynamic_cast<B&>(p);
		std::cout << "This is reference to class B" << std::endl;
		(void)b;
	}
	catch (std::exception &e) 
	{
		std::cerr << e.what() << '\n';
	}
	try {
		C &c = dynamic_cast<C&>(p);
		std::cout << "This is reference to class C" << std::endl;
		(void)c;
	}
	catch (std::exception &e) 
	{
		std::cerr << e.what() << '\n';
	}
}

int main(void)
{
	Base *cls;

	cls =  generate();
	identify_from_pointer(cls);
	identify_from_reference(*cls);
	return(0);
}
