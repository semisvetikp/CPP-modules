#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
	_type = type;
	_xp = 0;
}

AMateria::AMateria()
{
	_xp = 0;
}

AMateria::AMateria(const AMateria &src)
{
	_xp = src.getXP();
	_type = src.getType();
}

AMateria& AMateria::operator= (const AMateria &src)
{
	if (this == &src)
		return (*this);
	_xp = src.getXP();
	_type = src.getType();
	return (*this);
}

AMateria::~AMateria() {}

std::string const &AMateria::getType() const
{
	return (_type);
} 

unsigned int AMateria::getXP() const
{
	return (_xp);
} 

void AMateria::setType(std::string type)
{
	_type = type;
}

void AMateria::setXP(unsigned int xp)
{
	_xp = xp;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}