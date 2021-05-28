#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP
# include <iostream>
# include <string>
# include "Enemy.hpp"

class SuperMutant: public Enemy
{
	private:
	public:
			SuperMutant();
			virtual ~SuperMutant();
			SuperMutant(const SuperMutant &src); 
			SuperMutant& operator= (const SuperMutant &src);

			virtual void takeDamage(int damage);
};

#endif