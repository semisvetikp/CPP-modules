#ifndef WOMAN_HPP
#define WOMAN_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Woman: virtual public Victim
{
	private:
		std::string _name;
	public:
		Woman();
		Woman(std::string name);
		~Woman();
		Woman(const Woman &src);
		Woman& operator= (const Woman &src);
		void getPolymorphed() const;

};

#endif