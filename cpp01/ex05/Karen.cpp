#include <iostream>
#include "Karen.hpp"

Karen::Karen(void)
{
	return ;
}

Karen::~Karen(void)
{
	return ;
}

void Karen::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double"
				"-cheese-triple-pickle-specialketchup burger. "
				"I really do!" << std::endl;
}

void Karen::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs "
				"more money. You didn't put enough bacon in my"
				" burger! If you did, I wouldn't be asking "
				"for more!" << std::endl;
}

void Karen::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon"
				" for free. I've been coming for years whereas"
				" you started working here since last month.!";
	std::cout << std::endl;
}

void Karen::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the "
				"manager now." << std::endl;
}

void Karen::writeError(void)
{
	std::cout << "Invalid level" << std::endl;
}

void Karen::complain(std::string level)
{
	std::string arr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Karen::*f[5])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error, &Karen::writeError};
	int i = 0;
	while (i < 4 && level != arr[i])
		i++;
	(this->*f[i])();

}
