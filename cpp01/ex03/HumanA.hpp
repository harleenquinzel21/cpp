#ifndef HUMANA_HPP
# define HUMANA_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string	name;
		Weapon		&arms;
	public:
		HumanA(std::string _name, Weapon &_arms);
		~HumanA(void);
		void attack(void);
};

#endif
