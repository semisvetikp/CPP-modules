#ifndef SQUAD_HPP
#define SQUAD_HPP
#include <iostream>
#include "ISpaceMarine.hpp"
#include "ISquad.hpp"

class Squad: public ISquad
{
	private:
		int 			_count;
		ISpaceMarine	**_marine;
	public:
		Squad();
		Squad (const Squad &src);
		Squad& operator= (const Squad &src);
		virtual ~Squad();
		virtual int getCount() const;
		virtual ISpaceMarine* getUnit(int N) const;
		virtual int push(ISpaceMarine* unit);
};

#endif