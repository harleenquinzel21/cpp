#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main(void)
{
	Bureaucrat *bob = new Bureaucrat("bob", 3);
	Bureaucrat *jim = new Bureaucrat("jim", 149);
	Form *B = new Form("28B", 70, 70);
	
	std::cout << *bob << *jim << std::endl;
	std::cout << *B << std::endl;

	std::cout << "\033[1;36m~~~~~~SIGNED TESTS~~~~~\033[0;37m" << std::endl;

	try
	{
		B->beSigned(*jim);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << *B << std::endl;

	try
	{
		B->beSigned(*bob);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << *B << std::endl;



	delete jim;
	delete bob;
	delete B;
	return 0;

}