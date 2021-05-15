#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include <string>
#include "Brain.hpp"

class Human
{
	private:
		const Brain _Brain;
	public:
		const Brain *identify(); 
		const Brain &getBrain();
};

#endif
