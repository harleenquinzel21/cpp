#include <iostream>
#include <list>
#include <set>
#include <vector>
#include "easyfind.hpp"

int	main(void)
{
	std::list<int>		l;
	std::vector<int>	v;
	std::set<int>		s;

	std::cout << "\033[1;35m~~~~~~~~L I S T~~~~~~~~\x1b[0m\n";
	for (int i = 0; i < 5; i++)
		l.push_back(i);

	std::cout << "l : [";
	for (int i = 0; i < 5; i++)
		std::cout << l.front() + i;
	std::cout << "]" << std::endl;

	std::cout << "\033[1;35m~~~~~~FIND SUCCESS~~~~~\x1b[0m\n";
	try
	{
		std::list<int>::iterator lstIter = easyfind(l, 3);
		std::cout << *lstIter << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::list<int>::iterator lstIter = easyfind(l, 0);
		std::cout << *lstIter << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\033[1;35m~~~~~~~~FIND FAIL~~~~~~\x1b[0m\n";
	try
	{
		std::list<int>::iterator lstIter = easyfind(l, -1);
		std::cout << *lstIter << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::list<int>::iterator lstIter = easyfind(l, 10);
		std::cout << *lstIter << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\033[1;35m~~~~~~~~~VECTOR~~~~~~~~\x1b[0m\n";
	for (int i = 0; i < 7; i++)
		v.push_back(i);

	std::cout << "v : [";
	for (int i = 0; i < 7; i++)
		std::cout << v.front() + i;
	std::cout << "]" << std::endl;

	std::cout << "\033[1;35m~~~~~~FIND SUCCESS~~~~~\x1b[0m\n";
	try
	{
		std::vector<int>::iterator vectorIter = easyfind(v, 6);
		std::cout << *vectorIter << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::vector<int>::iterator vectorIter = easyfind(v, 1);
		std::cout << *vectorIter << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\033[1;35m~~~~~~~~FIND FAIL~~~~~~\x1b[0m\n";
	try
	{
		std::vector<int>::iterator vectorIter = easyfind(v, -10);
		std::cout << *vectorIter << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::vector<int>::iterator vectorIter = easyfind(v, 100);
		std::cout << *vectorIter << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\033[1;35m~~~~~~~~~~S E T~~~~~~~~~\x1b[0m\n";
	for (int i = 0; i < 3; i++)
		s.insert(i);
	std::cout << "s : [";
	std::set<int>::iterator setIter = easyfind(s, 0);
	std::cout << *setIter; setIter = easyfind(s, 1);
	std::cout << *setIter; setIter = easyfind(s, 2);
	std::cout << *setIter << "]" << std::endl;

	std::cout << "\033[1;35m~~~~~~FIND SUCCESS~~~~~\x1b[0m\n";
	try
	{
		std::set<int>::iterator setIter = easyfind(s, 0);
		std::cout << *setIter << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::set<int>::iterator setIter = easyfind(s, 1);
		std::cout << *setIter << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\033[1;35m~~~~~~~~FIND FAIL~~~~~~\x1b[0m\n";
	try
	{
		std::set<int>::iterator setIter = easyfind(s, -10);
		std::cout << *setIter << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::set<int>::iterator setIter = easyfind(s, 100);
		std::cout << *setIter << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}
