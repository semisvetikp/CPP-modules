#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	_count = 0;
	for (int i = 0; i < 4; ++i)
		_materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	_count = src._count;
	for (int i = 0; i < _count; ++i)
		_materias[i] = src._materias[i]->clone();
}

MateriaSource& MateriaSource::operator= (const MateriaSource &src)
{
	if (this == &src)
		return(*this);
	for (int i = 0; i < _count; ++i)
		delete _materias[i];
	_count = src._count;
	for (int i = 0; i < _count; ++i)
		_materias[i] = src._materias[i]->clone();
	return (*this);
}

MateriaSource::~MateriaSource() 
{
	if (_count > 0)
	{
		for (int i = 0; i < _count; ++i)
			delete _materias[i];
	}
}

void MateriaSource::learnMateria(AMateria* mat)
{
	if (_count != 4)
	{
		_materias[_count] = mat;
		++_count;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	if (_count != 0)
	{
		for (int i = 0; i < _count; ++i)
		{
			if (_materias[i]->getType() == type)
				return (_materias[i]->clone());
		}
		return (NULL);
	}
	return (NULL);
}