#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
}

Ice::Ice(const Ice &src)
{
	setXP(src.getXP());
	setType(src.getType());
}

Ice& Ice::operator= (const Ice &src)
{
	if (this == &src)
		return (*this);
	setXP(src.getXP());
	setType(src.getType());
	return (*this);
}

Ice::~Ice() {}

void Ice::use(ICharacter& target)
{
	setXP(getXP() + 10);
	std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
}

AMateria* Ice::clone() const
{
	Ice *copyIce = new Ice(*this);
	return (copyIce);
}