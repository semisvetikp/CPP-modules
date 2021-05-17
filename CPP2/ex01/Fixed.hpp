#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed 
{
	private:
		int					_raw;
		static const int	_weight = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const int integer);
		Fixed(const float floating);
		Fixed(const Fixed &fixed);
		Fixed& operator= (const Fixed &fixed);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};
	std::ostream& operator<< (std::ostream& out, const Fixed &fixed1);

#endif
