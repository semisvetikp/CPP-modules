#include "Sorcerer.hpp"
#include <iostream>
#include "Victim.hpp"
#include "Peon.hpp"
#include "Woman.hpp"

void mytest()
{
	Sorcerer robert("Robert", "the Magnificent");
	Woman wom("Lizzy");

	std::cout << wom;
	robert.polymorph(wom);
}


int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");

	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);

	// mytest();

	return 0; 
}
