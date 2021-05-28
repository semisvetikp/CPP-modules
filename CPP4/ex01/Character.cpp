#include "Character.hpp"

Character::Character()
{
	_ap = 40;
	_weapon = NULL;
}

Character::Character(std::string const & name)
{
	_name = name;
	_ap = 40;
	_weapon = NULL;
}

Character::Character(const Character &src)
{
	_name = src.getName();
	_ap = src._ap;
}

Character& Character::operator= (const Character &src)
{
	if (this == &src)
		return (*this);
	_name = src.getName();
	return (*this);
}

Character::~Character() {}

std::string const &Character::getName() const { return _name;}

void Character::recoverAP()
{
	if (_ap < 40)
		_ap += 10;
}

void Character::equip(AWeapon* weapon)
{
	_weapon = weapon;
}

void Character::attack(Enemy* enemy)
{
 	if (_weapon != NULL)
	{
		if (_ap > _weapon->getAPCost())
		{
			std::cout << getName() << " attacks " << enemy->geType() << " with a " << _weapon->getName() << std::endl;
			_weapon->attack();
			_ap -= _weapon->getAPCost();
			enemy->takeDamage(_weapon->getDamage());
		}
		// else
		// 	std::cout << "Don't enough AP" << std::endl;
	}
}

std::ostream& operator<<(std::ostream& out, const Character &src)
{
	out << src.getName();
	out << " has ";
	out << src.getAP();
	if (src.getWeapon() != NULL)
	{
		out << " AP and wields a ";
		out << src.getWeapon()->getName();
		out << std::endl;
	}
	else 
		out << " AP and is unarmed\n";
	return out;
}


int Character::getAP() const {return _ap; }

AWeapon *Character::getWeapon() const {return _weapon; }
