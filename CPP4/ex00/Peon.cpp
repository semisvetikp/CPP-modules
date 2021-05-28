# include "Peon.hpp"

Peon::Peon()
{
	std::cout << "AHTUNG! The class can’t be instanciated without parameters" << std::endl;
}

Peon::Peon(std::string name): Victim(name)
{
	_name = name;
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}


Peon::Peon(const Peon &Peon)
{
	_name = Peon.getName();
}

Peon& Peon::operator= (const Peon &Peon)
{
	if (this == &Peon)
		return (*this);
	_name = Peon.getName();
	return *this;
}

void Peon::getPolymorphed() const
{
	std::cout << _name << " has been turned into a pink pony!" << std::endl;
}
