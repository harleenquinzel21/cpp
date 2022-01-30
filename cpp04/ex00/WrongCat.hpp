#ifndef WrongCat_HPP
# define WrongCat_HPP

#include <iostream>
#include "Animal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(WrongCat const &instance);
		~WrongCat(void);

		WrongCat	&operator=(WrongCat const &rhs);

		void makeSound(void)const;
};

#endif
