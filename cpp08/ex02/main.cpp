#include "mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "top: " << mstack.top() << std::endl;
	mstack.pop();//del first el
	std::cout << "top: " << mstack.top() << std::endl;
	std::cout << "\033[1;35m~~~~~~~~SIZE~~~~~~~~\x1b[0m\n";
	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;

	std::cout << "begin: " << *it << std::endl << "end: " << *ite << std::endl;
	std::cout << "\n\033[1;35m~~~~~~~~SYCLE~~~~~~~\x1b[0m\n";

	while (it != ite)
	{
		std::cout << *it << " ";
		it++;
	}
	std::cout << std::endl;
	std::cout << "\033[1;35m~~~~~~COPY IN STD::STACK~~~~~\x1b[0m\n";
	{
		std::stack<int> s(mstack);

		while (s.size())
		{
			std::cout << s.top() << " ";
			s.pop();
		}
		std::cout << std::endl;
	}

	{
		std::stack<int> s = mstack;

		while (s.size())
		{
			std::cout << s.top() << " ";
			s.pop();
		}
		std::cout << std::endl;
	}

	{
		std::cout << "\033[1;35m~~~~~~COPY&ITERATION in MUTANTSTACK~~~~~\x1b[0m\n";
		MutantStack<int> mstack;

		for (int i = 1; i <= 21; ++i)
			mstack.push(i);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		MutantStack<int> copy(mstack);
		while (copy.size())
		{
			std::cout << copy.top() << " ";
			copy.pop();
		}
		std::cout << std::endl;

		while (it != ite)
		{
		std::cout << *it << " ";
		it++;
		}

		std::cout << std::endl;
	}
}
