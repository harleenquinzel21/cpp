#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal(void);
		Animal(const Animal &instance);
		Animal(const std::string &_type);
		virtual ~Animal();

		Animal	&operator=(Animal const &rhs);
		std::string getType(void)const;

		virtual void makeSound(void)const;
	};

#endif
