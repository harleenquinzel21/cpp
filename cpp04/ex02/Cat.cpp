#include "Animal.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(void) : Animal("Cat")
{
	brain = new Brain;
	std::cout << "Cat created" << std::endl;
	return ;
}

Cat::Cat(Cat const &instance) : Animal()
{
	type = instance.type;
	brain = new Brain(*(instance.brain));
	*brain = *instance.brain;
	std::cout << "Cat created by copy constructor" << std::endl;
	return ;
}

Cat::~Cat(void)
{
	if (this->brain)
		delete this->brain;
	std::cout << "Cat deleted" << std::endl;
	return ;
}

Cat	&Cat::operator=(Cat const &rhs)
{
	delete this->brain;
	this->type = rhs.type;
	this->brain = new Brain(*(rhs.brain));
	return *this;
}

void Cat::makeSound(void)const
{
	std::cout << "\x1b[4;32mMEOW!\x1b[0m" << std::endl;
	return ;
}

void Cat::printAddress() const
{
	std::cout << "\x1b[4;32mbrain:\x1b[0m" << brain << std::endl;
}

void Cat::printIdeas() const
{
	brain->print_ideas();
}
