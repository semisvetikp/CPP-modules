#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
	_name = name;
	_HP = 100;
	_maxHP = 100;
	_energy = 100;
	_maxenergy = 100;
	_level = 1;
	_melee = 30;
	_rahge = 20;
	_armor = 5;
	std::cout << "\033[1;46mFR4G-TP is born\033[0m\n" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "\033[1;46mFR4G-TP leaved us...\033[0m\n" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragtrap)
{
	_name = fragtrap._name;
	_HP = fragtrap._HP;
	_maxHP = fragtrap._maxHP;
	_energy = fragtrap._energy;
	_maxenergy = fragtrap._maxenergy;
	_level = fragtrap._level;
	_melee = fragtrap._melee;
	_rahge = fragtrap._rahge;
	_armor = fragtrap._armor;
	std::cout << "Copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator= (const FragTrap &fragtrap)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &fragtrap)
		return (*this);
	_name = fragtrap._name;
	_HP = fragtrap._HP;
	_maxHP = fragtrap._maxHP;
	_energy = fragtrap._energy;
	_maxenergy = fragtrap._maxenergy;
	_level = fragtrap._level;
	_melee = fragtrap._melee;
	_rahge = fragtrap._rahge;
	_armor = fragtrap._armor;
	return *this;
}

void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "\033[1;41mFR4G-TP " << _name << " attacks " << target << " at range, causing " << _rahge << " points of damage!\033[0m\n" << std::endl;
}
void FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "\033[1;41mFR4G-TP " << _name << " attacks " << target << " at melee, causing " << _melee << " points of damage!\033[0m\n" << std::endl;
}
void FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "\033[1;31mOh no! FR4G-TP " << _name << " take a " << amount << " points of damage!\033[0m" << std::endl;
	_HP = _HP - amount + _armor;
	std::cout << "#HP FR4G-TP "  << _name << " is: " << _HP << "\n" << std::endl;
}
void FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "\033[1;36mOh yeah! FR4G-TP " << _name << " be repaired " << amount << " points of HP and energy!\033[0m\n" << std::endl;
	_HP = _HP + amount;
	_energy = _energy + amount;
	if (_HP >= 100)
	{
		std::cout << "\033[1;32mFR4G-TP " << _name << " has a maximum HP!\033[0m" << std::endl;
		_HP = _maxHP;
	}
	std::cout << "#HP FR4G-TP "  << _name << " is: " << _HP << "\n" << std::endl;
	if (_energy >= 100)
	{
		std::cout << "\033[1;32mFR4G-TP " << _name << " has a maximum energy!\033[0m" << std::endl;
		_energy = _maxenergy;
	}
	std::cout << "#Energy FR4G-TP "  << _name << " is: " << _energy << "\n" << std::endl;
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
			std::cout << "\033[1;45mFR4G-TP " << _name << " attack " << target << " with eye's lazer causing 20 points of damage!\033[0m\n" << std::endl;
		else if (random_variable == 1)
			std::cout << "\033[1;45mFR4G-TP " << _name << " attack " << target << " and shocks him causing 30 points of damage!\033[0m\n" << std::endl;
		else if (random_variable == 2)
			std::cout << "\033[1;45mFR4G-TP " << _name << " attack " << target << " and throws a bomb at him causing 40 points of damage!\033[0m\n" << std::endl;	
		else if (random_variable == 3)
			std::cout << "\033[1;45mFR4G-TP " << _name << " attack " << target << " with pillow causing 10 points of damage!\033[0m\n" << std::endl;
		else if (random_variable == 4)
			std::cout << "\033[1;45mFR4G-TP " << _name << " attack " << target << " with a hammer causing 25 points of damage!\033[0m\n" << std::endl;			
	}
	else 
		std::cout << "\033[1;33mKhe-Khm-GrKh :( FR4G-TP " << _name << " can't attack. Don't enough energy \033[0m\n" << std::endl;
}
