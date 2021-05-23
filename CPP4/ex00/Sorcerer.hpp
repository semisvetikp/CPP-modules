#ifndef SORCERER_HPP
#define SORCERER_HPP
# include <iostream>
# include <string>

class Sorcerer
{
	private:
		std::string _name;
		std::string _title;
		Sorcerer();
	public:
		Sorcerer(std::string name, std::string title);
		~Sorcerer();
		Sorcerer(const Sorcerer &fixed);
		Sorcerer& operator= (const Sorcerer &sorcerer);

		std::string	getName() const;
		std::string	getTitle() const;
};
	std::ostream& operator<< (std::ostream& out, const Sorcerer &sorcerer);

#endif
