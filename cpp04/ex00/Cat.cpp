#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Cat created" << std::endl;
	return ;
}

Cat::Cat(Cat const& instance) : Animal(instance)
{
	std::cout << "Cat created by copy constructor" << std::endl;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "Cat deleted" << std::endl;
	return ;
}

Cat	&Cat::operator=(Cat const &rhs)
{
	this->type = rhs.getType();
	return *this;
}

void Cat::makeSound(void)const
{
	std::cout << "MEEEOW!" << std::endl;
	return ;
}
