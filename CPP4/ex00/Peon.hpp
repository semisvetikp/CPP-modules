#ifndef PEON_HPP
#define PEON_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Peon: virtual public Victim
{
	private:
		std::string _name;
	public:
		Peon();
		Peon(std::string name);
		~Peon();
		Peon(const Peon &src);
		Peon& operator= (const Peon &src);
		void getPolymorphed() const;

};

#endif