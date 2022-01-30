#include <iostream>
#include "Brain.hpp"

	Brain::Brain(void) : ideas(new std::string[100])
	{
		std::cout << "Brain default constructor" << std::endl;
		return ;
	}

	Brain::Brain(Brain const &instance)
	{
		this->ideas = new std::string(*instance.getIdeas());
		std::cout << "Brain copy constructor" << std::endl;
		*this = instance;
		return ;
	}

	Brain &Brain::operator=(Brain const &rhs)
	{
		if (this != &rhs)
		{
			for (int i = 0; i < this->ideas->size(); i++)
				this->ideas[i] = rhs.getIdeas()[i];
		}
		return (*this);
	}
	Brain::~Brain(void)
	{
		std::cout << "Brain destructor called" << std::endl;
		return;
	}

	std::string *Brain::getIdeas(void) const
	{
		return (this->ideas);
	}

	void Brain::setIdeas(std::string *_ideas)
	{
		this->ideas = _ideas;
		return;
	}


