#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

NinjaTrap::NinjaTrap() {}

NinjaTrap::NinjaTrap(std::string name): ClapTrap(name)
{

	_name = name;
	_HP = 60;
	_maxHP = 60;
	_energy = 120;
	_maxenergy = 120;
	_level = 1;
	_melee = 60;
	_range = 5;
	_armor = 0;
	std::cout << "\033[5;46mNINJA-TP " << _name << " YO-YO-YO!! Wazap?! AVE CLAP TRAP!\033[0m" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &ninjatrap) :  ClapTrap(ninjatrap)
{
	_name = ninjatrap._name;
	_HP = ninjatrap._HP;
	_maxHP = ninjatrap._maxHP;
	_energy = ninjatrap._energy;
	_maxenergy = ninjatrap._maxenergy;
	_level = ninjatrap._level;
	_melee = ninjatrap._melee;
	_range = ninjatrap._range;
	_armor = ninjatrap._armor;
}

NinjaTrap& NinjaTrap::operator= (const NinjaTrap &ninjatrap)
{

	if (this != &ninjatrap)
	{
		_name = ninjatrap._name;
		_HP = ninjatrap._HP;
		_maxHP = ninjatrap._maxHP;
		_energy = ninjatrap._energy;
		_maxenergy = ninjatrap._maxenergy;
		_level = ninjatrap._level;
		_melee = ninjatrap._melee;
		_range = ninjatrap._range;
		_armor = ninjatrap._armor;
	}
	return (*this);
}	

NinjaTrap::~NinjaTrap()
{
	std::cout << "\033[5;46mNINJA-TP " << _name << ": I am a ninja and I will come for you in the dark ...\033[0m" << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap &trap)
{
	std::cout << "\033[5;36mNINJA-TP " << _name << " pays tribute to his ancestor " << trap.getName() << " and gives his life to him \033[0m"<< std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap &trap)
{
	std::cout << "\033[5;36mNINJA-TP " << _name << " say: FragTrap you are my worst enemy. I wan'y to kill you!\033[0m" << std::endl;
	this->meleeAttack(trap.getName());
	trap.takeDamage(_melee);
	std::cout << "\033[5;36mNINJA-TP " << _name << " AHA - HA - HA\033[0m" << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap &trap)
{
	std::cout << "\033[5;36mNINJA-TP " << _name << " say: We are all one family, my friend " << trap._name << ". I want to help you\033[0m"<< std::endl;
	trap.beRepaired(25);
}

void  NinjaTrap::ninjaShoebox(ScavTrap &trap)
{
	std::srand(time(0));
	sleep(1);
	int random_variable = std::rand() % 2;
	std::cout << "\033[5;36mNINJA-TP " << _name << " say: I don't know what to do with you. Therefore, the GREAT RANDOM will decide what I will do!\033[0m"<< std::endl;
	if (random_variable == 0)
	{
		std::cout << "\033[1;36mNINJA-TP " << _name << " say: Oops, sorry. Random isn't on your side today ¯|_(ツ)_/¯ .\033[0m" << std::endl;
		this->rangedAttack(trap.getName());
		trap.takeDamage(_range);		
	}
	else if (random_variable == 1)
	{
		std::cout << "\033[1;36mNINJA-TP " << _name << " say: You are lucky. I sends rays of good to you\033[0m" << std::endl;
			trap.beRepaired(10);
	}
}
