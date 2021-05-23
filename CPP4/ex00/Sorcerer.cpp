#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{
	std::cout << "AHTUNG! The class can’t be instanciated without parameters" << std::endl;
}

Sorcerer::Sorcerer(std::string name, std::string title)
{
	_name = name;
	_title = title;
	std::cout << _name << ", " << _title << " is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << _name << "," << _title << ", is dead. Consequences will never be the same!" << std::endl;
}

std::string	Sorcerer::getName() const
{
	return(_name);
}

std::string	Sorcerer::getTitle() const
{
	return(_title);
}

Sorcerer::Sorcerer(const Sorcerer &sorcerer)
{
	_name = sorcerer.getName();
	_title = sorcerer.getTitle();
}

Sorcerer& Sorcerer::operator= (const Sorcerer &sorcerer)
{
	if (this == &sorcerer)
		return (*this);
	_name = sorcerer.getName();
	_title = sorcerer.getTitle();
	return *this;
}

std::ostream& operator<<(std::ostream& out, const Sorcerer &sorcerer)
{
	out << "I am ";
	out << sorcerer.getName();
	out << ", ";
	out << sorcerer.getTitle();
	out <<", and I like ponies!" << std::endl;
	return out;
}
