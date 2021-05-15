#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
	if (N > 0)
		this->_cnt_zombie = N;
	else
		this->_cnt_zombie = 1;
	this->_zombs = new Zombie[_cnt_zombie];
}

void ZombieHorde::setZombieType(std::string type){

	this->_type = type;
}

void ZombieHorde::createZombies()
{
	std::string names[15] = {"Pepe", "Luna", "Ares", "Kreed", "EOneGay", "Buka", "Zena", "Rex",
								"Baby", "Kleo", "Sam", "Milk", "Lenin", "Shell", "Lohness"};
	for (int i = 0; i < this->_cnt_zombie; ++i)
	{
		std::srand(time(0));
		sleep(1);
		int random_variable = std::rand() % 10;
		this->_zombs[i].setType(this->_type);
		this->_zombs[i].setName(names[random_variable]); 
	}
}

void ZombieHorde::announce()
{
	for (int i = 0; i < this->_cnt_zombie; ++i)
		this->_zombs[i].announce();
}

ZombieHorde:: ~ZombieHorde(){
	delete[] _zombs;
	std::cout << "**Bye-bye zombies!!!**" << std::endl;
}