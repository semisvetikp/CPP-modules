#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP
#include <iostream>
#include <string>
#include "ISpaceMarine.hpp"

class TacticalMarine: public ISpaceMarine
{
	private:
		TacticalMarine(const TacticalMarine &src);
		TacticalMarine& operator=(const TacticalMarine &src);
	public:
		TacticalMarine();
		virtual ~TacticalMarine();
		virtual TacticalMarine* clone() const;
		virtual void battleCry() const;
		virtual void rangedAttack() const;
		virtual void meleeAttack() const;
};

#endif