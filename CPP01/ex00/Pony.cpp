#include "Pony.hpp"

Pony:: Pony(std::string maneColor, std::string coatColor, int numberOfLegs, int cost):
	m_maneColor(maneColor), m_coatColor(coatColor), m_numberOfLegs(numberOfLegs), m_cost(cost)
	{
		std::cout << "~**Pony is born!**~" << std::endl;
}

Pony:: ~Pony(){
	std::cout << "**Bye-bye**" << std::endl;
}


void Pony::helloIamPony(){
	std::cout << "Hello! I am Pony and here is some information about me:\n" << std::endl;
	std::cout << "Color of my mane is " << m_maneColor << std::endl;
	std::cout << "Color of my coat is " << m_coatColor << std::endl;
	std::cout << "I have a " << m_numberOfLegs << " legs" << std::endl;
	std::cout << "If you want to buy me my cost is " << m_cost << std::endl;
}

void Pony::eating(int count){
	if (count > 0){
		while(count > 0){
			std::cout << "I'am eating: omnom-nom" << std::endl;
			--count;
		}
	}
	else if (count <= 0)
		std::cout << "I want to eat!!! :(" << std::endl;
}
