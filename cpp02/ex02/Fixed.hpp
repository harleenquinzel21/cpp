#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	private:
		int	fixedValue;
		/*An integer to store the fixed-point number value.*/
		static const int fractionalBit = 8;
		/*A static constant integer to store the number of fractional bits.*/
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed &val);
		Fixed(const int &ival);
		Fixed(const float &fval);

		Fixed	&operator=(const Fixed &val);

		int		toInt(void) const;
		float	toFloat(void) const;

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

std::ostream	&operator<<(std::ostream &ostream, const Fixed &fixed);

#endif
