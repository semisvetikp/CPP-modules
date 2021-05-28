#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
}

Cure::Cure(const Cure &src)
{
	setXP(src.getXP());
	setType(src.getType());
}

Cure& Cure::operator= (const Cure &src)
{
	if (this == &src)
		return (*this);
	setXP(src.getXP());
	setType(src.getType());
	return (*this);
}

Cure::~Cure() {}

void Cure::use(ICharacter& target)
{
	setXP(getXP() + 10);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

AMateria* Cure::clone() const
{
	Cure *copycure = new Cure(*this);
	return (copycure);
}