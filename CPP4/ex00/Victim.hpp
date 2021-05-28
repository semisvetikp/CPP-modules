#ifndef VICTIM_HPP
#define VICTIM_HPP

# include <iostream>
# include <string>

class Victim
{
	protected:
		std::string _name;
	public:
		Victim();
		Victim(std::string name);
		~Victim();
		Victim(const Victim &src);
		Victim& operator= (const Victim &src);

		std::string	getName() const;
		virtual void getPolymorphed() const;

};
	std::ostream& operator<< (std::ostream& out, const Victim &src);

#endif