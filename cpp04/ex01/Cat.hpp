#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *brain;
public:
	Cat(void);
	Cat(Cat const &instance);
	~Cat(void);

	Cat	&operator=(Cat const &rhs);

	virtual void makeSound(void)const;
	Brain *getBrain(void) const;
	void setBrain(Brain *brain);
};

#endif
