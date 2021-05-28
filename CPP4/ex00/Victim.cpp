# include "Victim.hpp"

Victim::Victim()
{
	std::cout << "AHTUNG! The class can’t be instanciated without parameters" << std::endl;
}

Victim::Victim(std::string name)
{
	_name = name;
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << _name <<  " just died for no apparent reason!" << std::endl;
}

std::string	Victim::getName() const
{
	return(_name);
}

Victim::Victim(const Victim &Victim)
{
	_name = Victim.getName();
}

Victim& Victim::operator= (const Victim &Victim)
{
	if (this == &Victim)
		return (*this);
	_name = Victim.getName();
	return *this;
}

std::ostream& operator<<(std::ostream& out, const Victim &Victim)
{
	out << "I am ";
	out << Victim.getName();
	out <<" and I like otters!" << std::endl;
	return out;
}

void Victim::getPolymorphed() const
{
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}
