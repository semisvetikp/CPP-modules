#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP
# include <iostream>
# include <string>
# include "Enemy.hpp"

class RadScorpion: public Enemy
{
	private:
	public:
			RadScorpion();
			virtual ~RadScorpion();
			RadScorpion(const RadScorpion &src); 
			RadScorpion& operator= (const RadScorpion &src);

			virtual void takeDamage(int damage);
};

#endif