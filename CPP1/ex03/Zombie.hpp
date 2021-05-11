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
		Zombie();
		void setType(std::string type);
		void setName(std::string name);
		void announce();
};

#endif