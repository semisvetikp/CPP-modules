#include "HumanB.hpp"

HumanB::HumanB (std::string name)
{
	_name = name;
}


void HumanB::setWeapon(Weapon &weaponB)
{ 
	_weaponB = &weaponB;
}

void HumanB::attack()
{
	std::cout << _name <<" attacks with his " << _weaponB->getType() << std::endl;
}
