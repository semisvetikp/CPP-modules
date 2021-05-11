#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>

class Pony{
private:
	std::string	m_maneColor;
	std::string	m_coatColor;
	int			m_numberOfLegs;
	int			m_cost;

public:
	Pony(std::string maneColor, std::string coatColor, int numberOfLegs, int cost);
	~Pony();

	void helloIamPony();
	void eating(int count);

};

#endif