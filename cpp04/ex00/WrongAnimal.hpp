#ifndef WrongAnimal_HPP
# define WrongAnimal_HPP
#include <iostream>

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal(void);
	WrongAnimal(const WrongAnimal &instance);
	WrongAnimal(const std::string &_type);
	~WrongAnimal();

	WrongAnimal	&operator=(WrongAnimal const &rhs);
	std::string getType(void)const;

	void makeSound(void)const;
};

#endif
