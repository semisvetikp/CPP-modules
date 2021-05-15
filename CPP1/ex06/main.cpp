#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

void HumananaA()
{
	Weapon	club = Weapon("crude spiked club");

	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();	
}

void HumananaB()
{
	Weapon club = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
}

int main() 
{
	HumananaA();
	HumananaB();
	return(0);
}
