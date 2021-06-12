#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stack>
#include <iostream>
#include <string>

template <class T>
class MutantStack: public std::stack<T>
{
	public:
		typedef typename std::deque<T>::iterator iterator;
		typedef typename std::deque<T>::const_iterator const_iterator;
		MutantStack<T>() {}
		virtual ~MutantStack<T>() {}
		MutantStack<T>(const MutantStack<T> &src): std::stack<T>(src) { }
		MutantStack<T>& operator=(const MutantStack<T> &src)
		{
			if (this == &src)
				return (*this);
			std::stack<T>::operator=(src);
			return(*this);
		}

		iterator begin() { return(this->c.begin());}
		iterator end() { return(this->c.end());}
};

#endif