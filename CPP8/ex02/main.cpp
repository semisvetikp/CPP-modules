#include <iostream>
#include <stack>
#include "mutantstack.hpp"

void test(void)
{
	MutantStack<int> mstack;
	mstack.push(1);
	mstack.push(11);
	mstack.push(111);
	mstack.push(1111);
	mstack.push(111);
	mstack.push(11);
	mstack.push(1);
	
	MutantStack<int>::const_iterator it = mstack.begin();
	MutantStack<int>::const_iterator ite = mstack.end();

	while (it != ite) 
	{
		std::cout << *it << std::endl;
		// *it = 5;
		++it; 
	}
}

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "top: " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "size: " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(50);
	mstack.push(505);
	mstack.push(505050);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite) 
	{
		std::cout << *it << std::endl;
		++it; 
	}
	std::stack<int> s(mstack);

	std::cout << "Test for copy" << std::endl;
	int size = s.size();
	for (int i = 0; i < size; ++i)
	{
		std::cout << "top stack: " << s.top() << std::endl;
		s.pop();
	}

	test();
	return 0;
}
