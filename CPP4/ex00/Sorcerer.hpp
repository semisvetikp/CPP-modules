#ifndef SORCERER_HPP
#define SORCERER_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Sorcerer
{
	private:
		std::string _name;
		std::string _title;
		Sorcerer();
	public:
		Sorcerer(std::string name, std::string title);
		~Sorcerer();
		Sorcerer(const Sorcerer &src);
		Sorcerer& operator= (const Sorcerer &sorcerer);

		std::string	getName() const;
		std::string	getTitle() const;
		void polymorph(Victim const &src) const;

};
	std::ostream& operator<< (std::ostream& out, const Sorcerer &sorcerer);

#endif
