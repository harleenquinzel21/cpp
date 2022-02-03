#include "Cat.hpp"
#include "Dog.hpp"

int main()
{

//make array of animals

		Animal *animals[6];
	for (int i = 0; i < 6; i++)
	{
		if (i%2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
//check sound
	std::cout << animals[0]->getType() << " : ";
	animals[0]->makeSound();
	std::cout << animals[1]->getType() << " : ";
	animals[1]->makeSound();

//del array of animals
	for (int i = 0; i < 6; ++i)
		delete animals[i];

	std::cout << std::endl;

//deep copy tests
	Cat cat_1;
	Cat cat_2 = cat_1;
	std::cout << "Cat1's ";
	cat_1.printAddress();
	std::cout << "Cat2's ";
	cat_2.printAddress();
	std::cout << std::endl;
	std::cout << "------------------------" << std::endl;
	std::cout << "Cat1's ";
	cat_1.printIdeas();
	std::cout << "Cat2's ";
	cat_2.printIdeas();

	std::cout << std::endl;

	Dog dog_1;
	Dog dog_2 = dog_1;
	std::cout << "Dog1's ";
	dog_1.printAddress();
	std::cout << "Dog2's ";
	dog_2.printAddress();
	std::cout << std::endl;
	std::cout << "------------------------" << std::endl;
	std::cout << "Dog1's ";
	dog_1.printIdeas();
	std::cout << "Dog2's ";
	dog_2.printIdeas();

	// std::cout << std::endl;
	// Animal *animal = new Animal();
	// delete animal;
}

