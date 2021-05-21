#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->setName(name);
	setEnergy(50);
	setMaxEnergy(50);
	setLevel(1);
	setMelee(20);
	setRange(15);
	setArmor(3);
	std::cout << "\033[1;44mSC4V-TP " << getName() << " is with us now. AVE CLAP TRAP!\033[0m" << std::endl;
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

