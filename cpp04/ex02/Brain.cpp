#include <iostream>
#include "Brain.hpp"

	Brain::Brain(void)
	{
		std::cout << "Brain default constructor" << std::endl;
		for (int i = 0; i < 100; i+=4)
		{
			ideas[i] = "run ";
			ideas[i + 1] = "eat ";
			ideas[i + 2] = "sleep ";
			ideas[i + 3] = "play ";
		}
		return ;
	}

	Brain::Brain(Brain const &instance)
	{
		std::cout << "Brain copy constructor" << std::endl;
		for (int i = 0; i < 100; i++)
			ideas[i] = instance.ideas[i];
		return ;
	}

	Brain &Brain::operator=(Brain const &rhs)
	{
		std::cout << "Brain assignment operator" << std::endl;
		if (this != &rhs)
		{
			for (int i = 0; i < 100; i++)
				ideas[i] = rhs.ideas[i];
		}
		return (*this);
	}
	Brain::~Brain(void)
	{
		std::cout << "Brain default destructor called" << std::endl;
		return;
	}

	void Brain::print_ideas() const
	{
		std::cout << "\x1b[4;32mideas:\x1b[0m" << std::endl;
		for (int i = 0; i < 100; i++)
			std::cout << ideas[i];
		std::cout << std::endl << "------------------------" << std::endl;
}



