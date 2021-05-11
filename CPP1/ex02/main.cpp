#include "ZombieEvent.hpp"
#include "Zombie.hpp"


int main(void)
{
	ZombieEvent  Event;
	Zombie *Boba;
	Event.setZombieType("simple zombie");
	Boba = Event.newZombie("Pupa");
	Boba->announce();
	Event.randomChump();
	delete Boba;
	return(0);
}