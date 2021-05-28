#include "SuperTrap.hpp"

SuperTrap::SuperTrap() {}

SuperTrap::SuperTrap(std::string name): ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
	_name = name;
	_HP = 100;
	_maxHP = 100;
	_energy = 120;
	_maxenergy = 120;
	_level = 1;
	_melee = 60;
	_range = 20;
	_armor = 5;
	std::cout << "\033[1;42mSUPER-TP " << _name <<" I love my mommy - FragTrap and my daddy - NinjaTrap <3 \033[0m" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &supertrap) :  ClapTrap(supertrap),  FragTrap(supertrap), NinjaTrap(supertrap)
{
	_name = supertrap._name;
	_HP = supertrap._HP;
	_maxHP = supertrap._maxHP;
	_energy = supertrap._energy;
	_maxenergy = supertrap._maxenergy;
	_level = supertrap._level;
	_melee = supertrap._melee;
	_range = supertrap._range;
	_armor = supertrap._armor;
}

SuperTrap& SuperTrap::operator= (const SuperTrap &supertrap)
{
	if (this != &supertrap)
	{
		_name = supertrap._name;
	_HP = supertrap._HP;
	_maxHP = supertrap._maxHP;
	_energy = supertrap._energy;
	_maxenergy = supertrap._maxenergy;
	_level = supertrap._level;
	_melee = supertrap._melee;
	_range = supertrap._range;
	_armor = supertrap._armor;
	}
	return (*this);
}	

SuperTrap::~SuperTrap()
{
	std::cout << "\033[1;42mSUPER-TP " << _name << " By mommy, by daddy!!\033[0m" << std::endl;
}

void SuperTrap::rangedAttack(std::string const &target)
{
	NinjaTrap::rangedAttack(target);
	std::cout << "\033[1;42mSUPER-TP " << _name << " I inherited this technique from my father - NinjaTrap\033[0m" << std::endl;
}

void SuperTrap::meleeAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
	std::cout << "\033[1;42mSUPER-TP " << _name << " I inherited this technique from my mather - FragTrap\033[0m" << std::endl;
}
