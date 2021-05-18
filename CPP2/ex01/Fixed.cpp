#include "Fixed.hpp"

Fixed::Fixed()
{
	_raw = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) : _raw(fixed._raw) 
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int integer)
{
	_raw = integer << _bits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float floating)
{
	_raw = roundf(floating * (1 << _bits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator= (const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	_raw = fixed.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	return (_raw);
}

void Fixed::setRawBits(int const raw)
{
	_raw = raw;
}

std::ostream& operator<<(std::ostream& out, const Fixed &Fixed1)
{
	out << Fixed1.toFloat();
	return out;
}

float Fixed::toFloat(void) const
{
	return(static_cast<float>(this->getRawBits()) /  static_cast<float>(1 << this->_bits)); 
}

int Fixed::toInt(void) const
{
	return((this->getRawBits() >> this->_bits));
}
