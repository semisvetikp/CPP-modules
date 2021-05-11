#include "Brain.hpp"

Brain::Brain()
{
	_name = "Sveta";
	_sex = "Female";
	_age = 24;
}

const Brain *Brain::identify() const
{
	return(this);
}
