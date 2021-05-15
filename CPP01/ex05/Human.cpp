#include "Human.hpp"

const Brain *Human::identify()
{
	return(this->_Brain.identify());
}

const Brain &Human::getBrain()
{
	return(this->_Brain);
}
