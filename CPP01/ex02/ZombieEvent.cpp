#include "ZombieEvent.hpp"

void ZombieEvent::setZombieType(std::string type){

	this->_type = type;
}

Zombie* ZombieEvent::newZombie(std::string name) {

	Zombie *zimba = new Zombie(name, this->_type);
	return(zimba);
}

void ZombieEvent::randomChump()
{
	std::srand(time(0));
	int random_variable = std::rand() % 10;
	std::string names[10] = {"Pepe", "Luna", "Ares", "Kreed", "EOneGay", 
								"Baby", "Kleo", "Sam", "Milk", "Lenin"};
	Zombie Aboba(names[random_variable], this->_type); 
	Aboba.announce();
}