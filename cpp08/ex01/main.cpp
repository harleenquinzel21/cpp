#include <iostream>
#include "Span.hpp"

int main()
{
	Span sp0 = Span(3);
	try
	{
		std::cout << "\033[1;35m~~~~~~~~ADDAD SUCCESS~~~~~~\x1b[0m\n";
		sp0.addNumber(1); std::cout << "adeed: 1\n";
		sp0.addNumber(2); std::cout << "adeed: 2\n";
		sp0.addNumber(5); std::cout << "adeed: 5\n";
		std::cout << "\033[1;35m~~~~~~~~~~ADDAD FAIL~~~~~~~\x1b[0m\n";
		sp0.addNumber(10); std::cout << "adeed: 10\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	Span sp = Span(10000);

	try
	{
		std::cout << "\033[1;35m~~~~~~~~~~SPAN FAIL~~~~~~~~\x1b[0m\n";
		sp.addNumber(5);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << "\033[1;35m~~~~~~~~SPAN SUCCESS~~~~~~~\x1b[0m\n";
		sp.addNumber(3);sp.addNumber(30);
		sp.addNumber(17);sp.addNumber(170);
		sp.addNumber(9);sp.addNumber(90);
		sp.addNumber(11);sp.addNumber(110);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::vector<int> test;
	Span sp1(10000);
	Span sp2(10);
	try
	{
		std::cout << "\033[1;35m~~~~~ADD RANGE SUCCESS~~~~~\x1b[0m\n";
		for (int i = 0; i < 10000; i++)
			test.push_back( (i - 10) * 3 + (i - 20) );
		sp1.addRange(test.begin(), test.end());

		std::cout << sp1.shortestSpan() << std::endl;
		std::cout << sp1.longestSpan() << std::endl;

		std::cout << "\033[1;35m~~~~~~~ADD RANGE FAIL~~~~~~\x1b[0m\n";
		sp2.addRange(test.begin(), test.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}
