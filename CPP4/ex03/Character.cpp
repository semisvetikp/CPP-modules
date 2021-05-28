#include "Character.hpp"

Character::Character() {}

Character::Character(std::string name)
{
	_name = name;
	_count = 0;
	for (int i = 0; i < 4; ++i)
		_materias[i] = NULL;
}

Character::Character(const Character &src)
{
	_name = src.getName();
	_count = src.getCount();
	for (int i = 0; i < _count; ++i)
		_materias[i] = src._materias[i]->clone();
}

Character& Character::operator= (const Character &src)
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

Character::~Character() 
{
	if (_count > 0)
	{
		for (int i = 0; i < _count; ++i)
			delete _materias[i];
	}
}

std::string const & Character::getName() const
{
	return (_name);
}

int Character::getCount() const { return (_count); }


void Character::equip(AMateria* m)
{
	if (_count != 4)
	{
		_materias[_count] = m;
		++_count;
	}
}

void Character::unequip(int idx)
{
	if (idx > 0 && idx < 4 && idx < _count)
	{
		_materias[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < _count)
	{
		_materias[idx]->use(target);
	}
}
