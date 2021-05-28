#include "AWeapon.hpp"

AWeapon::AWeapon() {}
AWeapon::~AWeapon() {}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) 
{
	_name = name;
	_apcost = apcost;
	_damage = damage;
}

AWeapon::AWeapon(const AWeapon &src) 
{
	_name = src.getName();
	_apcost = src.getAPCost();
	_damage = src.getDamage();
}

AWeapon& AWeapon::operator= (const AWeapon &src) 
{
	if (this == &src)
		return (*this);
	_name = src._name;
	_apcost = src._apcost;
	_damage = src._damage;
	return (*this);
}

std::string const &AWeapon::getName() const {return _name;}

int AWeapon::getAPCost() const {return _apcost;}

int AWeapon::getDamage() const {return _damage;}