# include "Woman.hpp"

Woman::Woman()
{
	std::cout << "AHTUNG! The class can’t be instanciated without parameters" << std::endl;
}

Woman::Woman(std::string name): Victim(name)
{
	_name = name;
	std::cout << "Hi-hi-hi. Hi dear" << std::endl;
}

Woman::~Woman()
{
	std::cout << "Ahh..." << std::endl;
}

Woman::Woman(const Woman &Woman)
{
	_name = Woman.getName();
}

Woman& Woman::operator= (const Woman &Woman)
{
	if (this == &Woman)
		return (*this);
	_name = Woman.getName();
	return *this;
}

void Woman::getPolymorphed() const
{
	std::cout << _name << " has been turned into a .. STOP. Sorcer doesn't want to be intolerant. A woman will remain a woman" << std::endl;
}
