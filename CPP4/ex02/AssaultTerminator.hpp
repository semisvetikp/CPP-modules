#ifndef ASSAULTTEMINATOR_HPP
#define ASSAULTTEMINATOR_HPP
#include <iostream>
#include <string>
#include "ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine
{
	private:
		AssaultTerminator(const AssaultTerminator &src);
		AssaultTerminator& operator=(const AssaultTerminator &src);
	public:
		AssaultTerminator();
		virtual ~AssaultTerminator();
		virtual AssaultTerminator* clone() const;
		virtual void battleCry() const;
		virtual void rangedAttack() const;
		virtual void meleeAttack() const;
};

#endif