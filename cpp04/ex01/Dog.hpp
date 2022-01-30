#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *brain;
	public:
		Dog(void);
		Dog(Dog const &instance);
		~Dog(void);

		Dog	&operator=(Dog const &rhs);

		virtual void makeSound(void)const;
		Brain *getBrain(void) const;
		void setBrain(Brain *brain);
};

#endif
