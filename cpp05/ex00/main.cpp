#include <iostream>
#include "Bureaucrat.hpp"

int		main(void)
{
	Bureaucrat *b = new Bureaucrat("bob", 3);
	Bureaucrat *a = new Bureaucrat("jim", 149);

	std::cout << *b;
	std::cout << *a << std::endl;

	b->incGrade();
	b->incGrade();
	try
	{
		b->incGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << *b << std::endl;

	a->decGrade();

	try
	{
		a->decGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << *a << std::endl;


	delete a;
	delete b;
	return 0;

}