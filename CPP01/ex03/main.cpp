#include "ZombieHorde.hpp"
#include "Zombie.hpp"


int main(void)
{
	ZombieHorde  Horde(5);
	Horde.setZombieType("simple zombie");
	Horde.createZombies();
	Horde.announce();
	return(0);
}