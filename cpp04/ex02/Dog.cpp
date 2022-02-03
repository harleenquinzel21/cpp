#include "Animal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(void) : Animal("Dog")
{
	brain = new Brain;
	std::cout << "Dog created" << std::endl;
	return ;
}

Dog::Dog(Dog const &instance) : Animal()
{
	type = instance.type;
	brain = new Brain(*(instance.brain));
	*brain = *instance.brain;
	std::cout << "Dog created by copy constructor" << std::endl;
	return ;
}

Dog::~Dog(void)
{
	if (this->brain)
		delete this->brain;
	std::cout << "Dog deleted" << std::endl;
	return ;
}

Dog	&Dog::operator=(Dog const &rhs)
{
	delete this->brain;
	this->type = rhs.type;
	this->brain = new Brain(*(rhs.brain));
	return *this;
}

void Dog::makeSound(void)const
{
	std::cout << "\x1b[4;32mWOOF!\x1b[0m" << std::endl;
	return ;
}

void Dog::printAddress() const
{
	std::cout << "\x1b[4;32mbrain:\x1b[0m" << brain << std::endl;
}

void Dog::printIdeas() const
{
	brain->print_ideas();
}
