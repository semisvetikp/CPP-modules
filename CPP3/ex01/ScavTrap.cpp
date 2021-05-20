#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	_name = name;
	_HP = 100;
	_maxHP = 100;
	_energy = 50;
	_maxenergy = 50;
	_level = 1;
	_melee = 20;
	_rahge = 15;
	_armor = 3;
	std::cout << std::right << std::setw(80) 
			<< "\033[1;46mSC4V-TP " << _name << " is with us now \033[0m\n" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << std::right << std::setw(80) 
			<< "\033[1;46mSC4V-TP " << _name << " ...He left...\033[0m\n" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scvtrap)
{
	_name = scvtrap._name;
	_HP = scvtrap._HP;
	_maxHP = scvtrap._maxHP;
	_energy = scvtrap._energy;
	_maxenergy = scvtrap._maxenergy;
	_level = scvtrap._level;
	_melee = scvtrap._melee;
	_rahge = scvtrap._rahge;
	_armor = scvtrap._armor;
	std::cout << "Copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator= (const ScavTrap &scvtrap)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &scvtrap)
		return (*this);
	_name = scvtrap._name;
	_HP = scvtrap._HP;
	_maxHP = scvtrap._maxHP;
	_energy = scvtrap._energy;
	_maxenergy = scvtrap._maxenergy;
	_level = scvtrap._level;
	_melee = scvtrap._melee;
	_rahge = scvtrap._rahge;
	_armor = scvtrap._armor;
	return *this;
}

void ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << std::right << std::setfill(' ')
			<< std::setw(80) << "\033[1;41mSC4V-TP " << _name << " attacks " << target << " at range, causing " << _rahge << " points of damage!\033[0m\n" << std::endl;
}
void ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << std::right << std::setfill(' ')
			<< std::setw(80) << "\033[1;41mSC4V-TP " << _name << " attacks " << target << " at melee, causing " << _melee << " points of damage!\033[0m\n" << std::endl;
}
void ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << std::right << std::setfill(' ')
			<< std::setw(80) << "\033[1;31mOh no! SC4V-TP " << _name << " take a " << amount << " points of damage!\033[0m" << std::endl;
	_HP = _HP - amount + _armor;
	std::cout << std::right << std::setfill(' ')
		<< std::setw(80) <<  "HP SC4V-TP " << _name << " is: " << _HP << "\n" << std::endl;
}
void ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << std::right << std::setfill(' ')
			<< std::setw(80) << "\033[1;36mOh yeah! SC4V-TP " << _name << " be repaired " << amount << " points of HP and energy!\033[0m\n" << std::endl;
	_HP = _HP + amount;
	_energy = _energy + amount;
	if (_HP >= 100)
	{
		std::cout << std::right << std::setfill(' ')
			<< std::setw(80) << "\033[1;32mSC4V-TP " << _name << " has a maximum HP!\033[0m" << std::endl;
		_HP = _maxHP;
	}
	std::cout << std::right << std::setfill(' ')
		<< std::setw(80) <<  "HP SC4V-TP " <<  _name << " is: " << _HP << "\n" << std::endl;
	if (_energy >= 100)
	{
		std::cout << std::right << std::setfill(' ')
			<< std::setw(80) << "\033[1;32mSC4V-TP " << _name << " has a maximum energy!\033[0m" << std::endl;
		_energy = _maxenergy;
	}
	std::cout << std::right << std::setfill(' ')
		<< std::setw(80) <<  "Energy SC4V-TP "  << _name << " is: " << _energy << "\n" << std::endl;
}

void ScavTrap::challengeNewcomer()
{
	std::srand(time(0));
	sleep(1);
	int random_variable = std::rand() % 5;
	if (random_variable == 0)
		std::cout << std::right << std::setfill(' ')
			<< std::setw(80) << "\033[1;45mFR4G-TP " << _name << " attacks with the power of thought\033[0m\n" << std::endl;
	else if (random_variable == 1)
		std::cout << std::right << std::setfill(' ')
			<< std::setw(80) << "\033[1;45mFR4G-TP " << _name << " sends rays of good\033[0m\n" << std::endl;
	else if (random_variable == 2)
		std::cout << std::right << std::setfill(' ')
			<< std::setw(80) << "\033[1;45mFR4G-TP " << _name << " starts to clean up\033[0m\n" << std::endl;	
	else if (random_variable == 3)
		std::cout << std::right << std::setfill(' ')
			<< std::setw(80) << "\033[1;45mFR4G-TP " << _name << " goes to work\033[0m\n" << std::endl;
	else if (random_variable == 4)
		std::cout << std::right << std::setfill(' ')
			<< std::setw(80) << "\033[1;45mFR4G-TP " << _name << " goes on a trip around the world\033[0m\n" << std::endl;			
}

