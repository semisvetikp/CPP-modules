#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template <class T>
class Array
{
	private:
			unsigned int _length;
			T *_array;
	public:
		Array()
		{
			_length = new T[0]();
			_array = NULL;
    	}
		Array(unsigned int n)
		{
			_array = new T[n];
			_length = n;
			for (uint i = 0; i < n; ++i) 
				_array[i] = T();
		}
		~Array()
		{
			delete[] _array;
		}
		class OutRangeException: public std::exception
		{
			public:
				OutRangeException(std::string error) { _error = error; }
				virtual const char* what() const throw() { return _error.c_str(); }
				virtual ~OutRangeException() throw() {}
			private:
				std::string _error;
		};
		int size() const
		{
			return (_length);
		}
		Array(const Array &src)
		{
			_length = src.size();
			_array = new T[_length];
			for (uint i = 0; i < _length; ++i) 
				_array[i] = src._array[i];
		}
		Array<T>& operator=(const Array<T> &src)
		{
			if (this == &src)
				return (*this);
			delete [] _array;
			_length = src.size();
			_array = new T[_length];
			for (uint i = 0; i < _length; ++i) 
				_array[i] = src._array[i];			
			return (*this);
		}
		T& operator[](uint index)
		{
			if (index >= 0 && index < _length)
				return _array[index];
			else
				throw Array::OutRangeException("index out of range"); 
		}
};

#endif