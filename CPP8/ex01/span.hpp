#ifndef SPAN_HPP
#define SPAN_HPP
#include <vector>
#include <iostream>
#include <string>

class Span
{
	private:
		unsigned int	 	_N;
		std::vector<int>	_vect;
		Span();
	public:
		Span (unsigned int N);
		~Span();
		Span (const Span &src);
		Span& operator= (const Span &src);
		class SpanException: public std::exception
		{
			private:
				std::string _error;
			public:
				SpanException(std::string error);
				virtual const char* what() const throw();
				virtual ~SpanException() throw();
		};

		void addNumber(int n);
		int shortestSpan();
		int longestSpan();
		void addMore(int  n, unsigned int range);
};

#endif