#include <iostream>

int main(int ac, char **av)
{
	int i = 0, j;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	while (av[++i])
	{
		j = -1;
		while (av[i][++j])
		{
			if (av[i][j] >= 97 && av[i][j] <= 122)
				av[i][j] -= 32;
		}
		std::cout << av[i] << " ";
	}
	std::cout <<  std::endl;
}
