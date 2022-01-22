#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie( void );
		Zombie(std::string str);
		~Zombie(void);
		void rename(std::string new_name);
		void announce(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif