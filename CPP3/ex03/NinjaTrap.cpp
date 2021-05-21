#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

NinjaTrap::NinjaTrap(std::string name): ClapTrap(name)
{
	this->setName(name);
	setHP(60);
	setMaxHP(60);
	setEnergy(120);
	setMaxEnergy(120);
	setLevel(1);
	setMelee(60);
	setRange(5);
	setArmor(0);
	std::cout << "\033[5;46mNINJA-TP " << getName() << " YO-YO-YO!! Wazap?! AVE CLAP TRAP!\033[0m" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "\033[5;46mNINJA-TP " << getName() << ": I am a ninja and I will come for you in the dark ...\033[0m" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap &trap)
{
	std::cout << "\033[5;36mNINJA-TP " << getName() << " say: FragTrap you are my worst enemy. I wan'y to kill you!\033[0m" << std::endl;
	this->meleeAttack(trap.getName());
	trap.takeDamage(getMelee());
	std::cout << "\033[5;36mNINJA-TP " << getName() << " AHA - HA - HA\033[0m" << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap &trap)
{
	std::cout << "\033[5;36mNINJA-TP " << getName() << " say: We are all one family, my friend " << trap.getName() << ". I want to help you\033[0m"<< std::endl;
	trap.beRepaired(25);
}

void  NinjaTrap::ninjaShoebox(ScavTrap &trap)
{
	std::srand(time(0));
	sleep(1);
	int random_variable = std::rand() % 2;
	std::cout << "\033[5;36mNINJA-TP " << getName() << " say: I don't know what to do with you. Therefore, the GREAT RANDOM will decide what I will do!\033[0m"<< std::endl;
	if (random_variable == 0)
	{
		std::cout << "\033[1;36mNINJA-TP " << getName() << " say: Oops, sorry. Random isn't on your side today ¯|_(ツ)_/¯ .\033[0m" << std::endl;
		this->rangedAttack(trap.getName());
		trap.takeDamage(getRange());		
	}
	else if (random_variable == 1)
	{
		std::cout << "\033[1;36mNINJA-TP " << getName() << " say: You are lucky. I sends rays of good to you\033[0m" << std::endl;
			trap.beRepaired(10);
	}
}
