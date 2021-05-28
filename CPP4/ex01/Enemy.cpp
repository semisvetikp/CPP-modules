#include "Enemy.hpp"

Enemy::Enemy() {}

Enemy::Enemy(int hp, std::string const & type) 
{
	_hp = hp;
	_type = type;
}

Enemy::~Enemy() {}

Enemy::Enemy(const Enemy &src) 
{
	_hp = src.getHP();
	_type = src.geType();
}

Enemy& Enemy::operator= (const Enemy &src)
{
	if (this == &src)
		return (*this);
	_hp = src.getHP();
	_type = src.geType();
	return (*this);
}

std::string const &Enemy::geType() const 	{return _type;}
int Enemy::getHP() const 					{return _hp;}

void Enemy::takeDamage(int k)
{
	if (k >= 0)
		_hp = _hp - k;
}