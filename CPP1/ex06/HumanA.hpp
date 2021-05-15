#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string _name;
		Weapon &_weaponA;
	public:
		HumanA (std::string name, Weapon &type);
		void attack();
};

#endif