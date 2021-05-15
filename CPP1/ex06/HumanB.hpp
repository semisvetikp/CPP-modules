#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string _name;
		Weapon *_weaponB;
	public:
		HumanB (std::string name);
		void setWeapon(Weapon &weaponB);
		void attack();
};

#endif