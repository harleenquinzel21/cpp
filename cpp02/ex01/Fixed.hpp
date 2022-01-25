#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	private:
		int	fixedValue;
		static const int fractionalBit = 8;
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed &val);
		Fixed	&operator=(const Fixed &val);
		int		getRawBits(void) const;
		void	setRawBits(int const val);
};

#endif
