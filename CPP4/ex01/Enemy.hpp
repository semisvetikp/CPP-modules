#ifndef ENEMY_HPP
#define ENEMY_HPP
# include <iostream>
# include <string>

class Enemy
{
	private:
			std::string _type;
			int			_hp;
	public:
			Enemy();
			Enemy(int hp, std::string const & type);
			virtual ~Enemy();
			Enemy(const Enemy &src); 
			Enemy& operator= (const Enemy &src);

			std::string const &geType() const;
			int getHP() const;

			virtual void takeDamage(int k);
};

#endif