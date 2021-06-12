#include "span.hpp"
#include <algorithm>  

Span::Span (unsigned int N)
{
	_N = N;
}

Span::~Span() {}

Span::Span (const Span &src)
{
	*this = src;
}

Span& Span::operator= (const Span &src)
{
	if (this == &src)
		return(*this);
	_N = src._N;
	_vect = src._vect;
	return(*this);
}

void Span::addNumber(int n)
{
	if (_vect.size() < _N)
		_vect.push_back(n);
	else
		throw Span::SpanException("array is full");
}

void Span::addMore(int n, unsigned int range)
{
	if (_N - _vect.size() >= range)
	{
		for (uint i = 0; i < range; ++i)
			_vect.push_back(n);
	}
	else
		throw Span::SpanException("array so small for this range");
}

int Span::shortestSpan()
{
	if (_vect.size() <= 1)
		throw Span::SpanException("array is empty or too small for this method");

	std::sort (_vect.begin(), _vect.end()); 

	std::vector<int>::const_iterator it;
	it = _vect.begin();

	int min = abs(*(it + 1) - *it);
	for (it = _vect.begin(); it < _vect.end(); ++it)
	{
		if (it + 1 != _vect.end() && abs(*it - *(it + 1)) < min)
			min = abs(*it - *(it + 1));
	}
	return(min);		
}

int Span::longestSpan()
{
	if (_vect.size() <= 1)
		throw Span::SpanException("array is empty or too small for this method");
	int size = _vect.size();
	std::sort (_vect.begin(), _vect.end()); 
	return(abs(_vect[0] - _vect[size - 1]));
}


Span::SpanException::SpanException(std::string error)
{
	_error = error;
}
const char* Span::SpanException::what() const throw() { return _error.c_str(); }
Span::SpanException::~SpanException() throw() {}
