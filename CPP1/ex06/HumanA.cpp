#include "HumanA.hpp"

HumanA::HumanA (std::string name, Weapon &type) : _weaponA(type) {
	_name = name;
}

void HumanA::attack()
{
	std::cout << _name <<" attacks with his " << _weaponA.getType() << std::endl;
}
