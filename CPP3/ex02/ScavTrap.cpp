#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	_name = name;
	_HP = 100;
	_maxHP = 100;
	_energy = 50;
	_maxenergy = 50;
	_level = 1;
	_melee = 20;
	_range = 15;
	_armor = 3;
	std::cout << "\033[1;44mSC4V-TP " << getName() << " is with us now. AVE CLAP TRAP!\033[0m" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &ScavTrap) :  ClapTrap(ScavTrap)
{
	_name = ScavTrap._name;
	_HP = ScavTrap._HP;
	_maxHP = ScavTrap._maxHP;
	_energy = ScavTrap._energy;
	_maxenergy = ScavTrap._maxenergy;
	_level = ScavTrap._level;
	_melee = ScavTrap._melee;
	_range = ScavTrap._range;
	_armor = ScavTrap._armor;
}

ScavTrap& ScavTrap::operator= (const ScavTrap &ScavTrap)
{
	if (this != &ScavTrap)
	{
	_name = ScavTrap._name;
	_HP = ScavTrap._HP;
	_maxHP = ScavTrap._maxHP;
	_energy = ScavTrap._energy;
	_maxenergy = ScavTrap._maxenergy;
	_level = ScavTrap._level;
	_melee = ScavTrap._melee;
	_range = ScavTrap._range;
	_armor = ScavTrap._armor;
	}
	return (*this);
}	

ScavTrap::~ScavTrap()
{
	std::cout << "\033[1;44mSC4V-TP " << getName() << " ...He left...\033[0m" << std::endl;
}

void ScavTrap::challengeNewcomer()
{
	std::srand(time(0));
	sleep(1);
	int random_variable = std::rand() % 5;
	if (random_variable == 0)
		std::cout << "\033[1;34mSC4V-TP " << getName() << " attacks with the power of thought\033[0m" << std::endl;
	else if (random_variable == 1)
		std::cout << "\033[1;34mSC4V-TP " << getName() << " sends rays of good\033[0m" << std::endl;
	else if (random_variable == 2)
		std::cout << "\033[1;34mSC4V-TP " << getName() << " starts to clean up\033[0m" << std::endl;	
	else if (random_variable == 3)
		std::cout << "\033[1;34mSC4V-TP " << getName() << " goes to work\033[0m" << std::endl;
	else if (random_variable == 4)
		std::cout << "\033[1;34mSC4V-TP " << getName() << " goes on a trip around the world\033[0m" << std::endl;			
}

