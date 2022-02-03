#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << std::endl;

	const WrongAnimal* wanimal = new WrongAnimal();
	const WrongAnimal* wcat = new WrongCat();
	std::cout << std::endl;

	std::cout << j->getType() << " : ";
	j->makeSound();
	std::cout << i->getType() << " : ";
	i->makeSound(); //will output the cat sound!
	std::cout << meta->getType() << ":" << std::endl;
	meta->makeSound();
	std::cout << std::endl;

	std::cout << wcat->getType() << ":" << std::endl;
	wcat->makeSound(); //will output the wrong cat sound!
	std::cout << meta->getType() << ":" << std::endl;
	wanimal->makeSound();

	std::cout << std::endl;
	delete meta;
	delete j;
	delete i;
	delete wcat;
	delete wanimal;

	return 0;
}
