#include "Squad.hpp"
#include "ISpaceMarine.hpp"

Squad::Squad()
{
	_count = 0;
	_marine = NULL;
}

Squad::Squad (const Squad &src)
{
	_count = src._count;
	_marine = new ISpaceMarine*[_count];
	for (int i = 0; i < _count; ++i)
		_marine[i] = src._marine[i]->clone();
}

Squad& Squad::operator= (const Squad &src)
{
	if(this == &src)
		return (*this);
	for (int i = 0; i < _count; ++i)
		delete _marine[i];
	delete[] _marine;
	_count = src._count;
	_marine = new ISpaceMarine*[_count];
	for (int i = 0; i < _count; ++i)
		_marine[i] = src._marine[i]->clone();
	return (*this);
}

Squad::~Squad() 
{
	if (_count > 0)
	{
		for (int i = 0; i < _count; ++i)
			delete _marine[i];
		delete[] _marine;
	}
}

int Squad::getCount() const
{
	return (_count);
}

ISpaceMarine* Squad::getUnit(int N) const
{
	if (N > _count || N < 0)
		return (NULL);
	return (this->_marine[N]);
}

int Squad::push(ISpaceMarine* unit)
{
	if (_count > 0)
	{
		_count += 1;
		ISpaceMarine **copy = new ISpaceMarine*[_count];
		for (int i = 0; i < _count - 1; ++i)
			copy[i] = _marine[i];
		copy[_count - 1] = unit;
		delete[] _marine;
		_marine = copy;
	}
	else
	{
		_count += 1;
		_marine = new ISpaceMarine*[_count];
		_marine[0] = unit;
	}
	return (_count);
}

