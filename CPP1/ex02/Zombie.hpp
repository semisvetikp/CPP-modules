#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
#include <cstdlib>
#include <ctime>

class Zombie
{
	private:
		std::string _name;
		std::string _type;

	public:
		Zombie(std::string name, std::string type);
		void announce();
		void randomChump();
};

#endif