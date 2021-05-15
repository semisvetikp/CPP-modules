#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>
#include <string>

class Brain
{
	private:
		std::string _name;
		std::string _sex;
		int			_age;
	public:
		Brain();
		const Brain *identify() const;
};

#endif