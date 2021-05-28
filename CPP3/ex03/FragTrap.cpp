#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap() {}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	_name = name;
	std::cout << "\033[1;43mFR4G-TP " << _name <<" is born. AVE CLAP TRAP!\033[0m" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "\033[1;43mFR4G-TP " << _name << " leaved us...\033[0m" << std::endl;
}

FragTrap::FragTrap(const FragTrap &FragTrap) :  ClapTrap(FragTrap)
{
	_name = FragTrap._name;
	_HP = FragTrap._HP;
	_maxHP = FragTrap._maxHP;
	_energy = FragTrap._energy;
	_maxenergy = FragTrap._maxenergy;
	_level = FragTrap._level;
	_melee = FragTrap._melee;
	_range = FragTrap._range;
	_armor = FragTrap._armor;
}

FragTrap& FragTrap::operator= (const FragTrap &FragTrap)
{
	if (this != &FragTrap)
	{
		_name = FragTrap._name;
		_HP = FragTrap._HP;
		_maxHP = FragTrap._maxHP;
		_energy = FragTrap._energy;
		_maxenergy = FragTrap._maxenergy;
		_level = FragTrap._level;
		_melee = FragTrap._melee;
		_range = FragTrap._range;
		_armor = FragTrap._armor;
	}
	return (*this);
}	

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	std::srand(time(0));
	sleep(1);
	int random_variable = std::rand() % 5;
	if (_energy > 25)
	{
		_energy = _energy - 25;
		if (random_variable == 0)
			std::cout << "\033[1;33mFR4G-TP " << _name << " attack " << target << " with eye's lazer causing 20 points of damage!\033[0m" << std::endl;
		else if (random_variable == 1)
			std::cout << "\033[1;33mFR4G-TP " << _name << " attack " << target << " and shocks him causing 30 points of damage!\033[0m" << std::endl;
		else if (random_variable == 2)
			std::cout << "\033[1;33mFR4G-TP " << _name << " attack " << target << " and throws a bomb at him causing 40 points of damage!\033[0m" << std::endl;	
		else if (random_variable == 3)
			std::cout << "\033[1;33mFR4G-TP " << _name << " attack " << target << " with pillow causing 10 points of damage!\033[0m" << std::endl;
		else if (random_variable == 4)
			std::cout << "\033[1;33mFR4G-TP " << _name << " attack " << target << " with a hammer causing 25 points of damage!\033[0m" << std::endl;			
	}
	else 
		std::cout << "\033[1;33mKhe-Khm-GrKh :( FR4G-TP " << _name << " can't attack. Don't enough energy \033[0m" << std::endl;
}
