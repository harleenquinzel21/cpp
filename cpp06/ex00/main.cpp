#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <cstdlib>

double	read_arg(const char *str)
{
	double value;

	value = static_cast <double> (strtod(str, NULL));
	if (value == 0 && str[1] == '\0' && !isdigit(str[0])
		&& isprint(str[0]))
		return (static_cast <double> (str[0]));
	return value;
}

void	convert_to_char(double value)
{
	char	ch;

	std::cout << "char: ";
	if (!isascii(value))
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	ch = static_cast <char> (value);
	if (!isprint(value))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << ch << "'" << std::endl;
}

void	convert_to_int(double value)
{
	int i;
	std::cout << "int: ";
	if (value > std::numeric_limits <int>::max() ||
		value < std::numeric_limits <int>::min() ||
		value != value)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	i = static_cast <int> (value);
	std::cout << i << std::endl;
}

void	convert_to_float(double value)
{
	float	f;
	std::cout << "float: ";
	if (value == std::numeric_limits <double>::infinity())
	{
		std::cout << "inff" << std::endl;
		return;
	}
	if (value == -std::numeric_limits <double>::infinity())
	{
		std::cout << "-inff" << std::endl;
		return;
	}
	if (value > std::numeric_limits <float>::max() ||
		value < -std::numeric_limits <float>::max() )
	{
		std::cout << "impossible" << std::endl;
		return;
	}
	f = static_cast <float> (value);
	std::cout << f << "f" << std::endl;
}

void	convert_to_double(double value)
{
	std::cout << "double: ";
	if (value == std::numeric_limits <double>::infinity())
	{
		std::cout << "inf" << std::endl;
		return;
	}
	if (value == -std::numeric_limits <double>::infinity())
	{
		std::cout << "-inf" << std::endl;
		return;
	}
	if (value > std::numeric_limits <double>::max() ||
		value < -std::numeric_limits <double>::max() )
	{
		std::cout << "impossible" << std::endl;
		return;
	}
	std::cout << static_cast <double> (value) << std::endl;
}

int	main(int ac, char **av)
{
	double value;

	if (ac != 2)
	{
		std::cerr << "Usage: ./convert <value>" << std::endl;
		return 1;
	}
	std::cout << std::fixed;
	std::cout << std::setprecision(1);
	value = read_arg(av[1]);
	convert_to_char(value);
	convert_to_int(value);
	convert_to_float(value);
	convert_to_double(value);
}
