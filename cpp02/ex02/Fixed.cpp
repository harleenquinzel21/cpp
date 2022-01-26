#include <iostream>
#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->fixedValue = 0.0;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &val)
{
		std::cout << "Copy constructor called" << std::endl;
		*this = val;
		return;
}

Fixed::Fixed(const int &ival)
{
		std::cout << "Int constructor called" << std::endl;
		this->fixedValue = ival << this->fractionalBit; // == ival = ival * pow(2,8)
		return;
}

Fixed::Fixed(const float &fval)
{
		std::cout << "Float constructor called" << std::endl;
		this->fixedValue = roundf(fval * (1 << this->fractionalBit));
		return;
}

Fixed	&Fixed::operator=(const Fixed &val)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &val)
		this->fixedValue = val.getRawBits();
	return (*this);
}

int	Fixed::toInt(void) const
{
	return (this->fixedValue >> this->fractionalBit);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->fixedValue / (1 << this->fractionalBit));
}

int	Fixed::getRawBits(void) const
{
		return (this->fixedValue);
}

void	Fixed::setRawBits(int const raw)
{
		this->fixedValue = raw;
		return ;
}

std::ostream	&operator<<(std::ostream &ostream, const Fixed &fixed)
{
	ostream << fixed.toFloat();
	return (ostream);
}
