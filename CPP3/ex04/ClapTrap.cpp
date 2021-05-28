#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {}

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_HP = 100;
	_maxHP = 100;
	_energy = 100;
	_maxenergy = 100;
	_level = 1;
	_melee = 30;
	_range = 20;
	_armor = 5;
	std::cout << "\033[1;41mCL4P-TP " << _name << " here\033[0m" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "\033[1;41mCL4P-TP " << _name << ": BYE-BYE!!\033[0m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ClapTrap)
{
	_name = ClapTrap._name;
	_HP = ClapTrap._HP;
	_maxHP = ClapTrap._maxHP;
	_energy = ClapTrap._energy;
	_maxenergy = ClapTrap._maxenergy;
	_level = ClapTrap._level;
	_melee = ClapTrap._melee;
	_range = ClapTrap._range;
	_armor = ClapTrap._armor;
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator= (const ClapTrap &ClapTrap)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &ClapTrap)
		return (*this);
	_name = ClapTrap._name;
	_HP = ClapTrap._HP;
	_maxHP = ClapTrap._maxHP;
	_energy = ClapTrap._energy;
	_maxenergy = ClapTrap._maxenergy;
	_level = ClapTrap._level;
	_melee = ClapTrap._melee;
	_range = ClapTrap._range;
	_armor = ClapTrap._armor;
	return *this;
}

unsigned int &ClapTrap::getHP()				{return (_HP);}

unsigned int &ClapTrap::getMaxHP()			{return (_maxHP);}

unsigned int &ClapTrap::getEnergy()			{return (_energy);}

unsigned int &ClapTrap::getMaxEnergy()		{return (_maxenergy);}

unsigned int &ClapTrap::getLevel()			{return (_level);}

std::string &ClapTrap::getName()			{return (_name);}

unsigned int &ClapTrap::getMelee()			{return (_melee);}

unsigned int &ClapTrap::getRange()			{return (_range);}

unsigned int &ClapTrap::getArmor()			{return (_armor);}


void ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << "\033[4;m" << _name << " attacks " << target << " at range, causing " << _range << " points of damage!\033[0m" << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << "\033[4;m" << _name << " attacks " << target << " at melee, causing " << _melee << " points of damage!\033[0m" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "\033[4;mOh no! " << _name << " take a " << amount << " points of damage!\033[0m" << std::endl;
	_HP = _HP - amount + _armor;
	std::cout << "\033[4;m#HP "  << _name << " is: " << _HP << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "\033[1;mOh yeah! " << _name << " be repaired " << amount << " points of HP and energy!\033[0m" << std::endl;
	_HP = _HP + amount;
	_energy = _energy + amount;
	if (_HP >= 100)
	{
		std::cout << "\033[4;4m" << _name << " has a maximum HP!\033[0m" << std::endl;
		_HP = _maxHP;
	}
	std::cout << "\033[4;4m#HP "  << _name << " is: " << _HP << std::endl;
	if (_energy >= 100)
	{
		std::cout << "\033[4;4m" << _name << " has a maximum energy!\033[0m" << std::endl;
		_energy = _maxenergy;
	}
	std::cout << "\033[4;4m#Energy "  << _name << " is: " << _energy << std::endl;
}
