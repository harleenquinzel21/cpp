#include <iostream>

int main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "Addres of string: " << &string << std::endl; 
	std::cout << "Addres of string: " << stringPTR << std::endl;
	std::cout << "Addres of string: " << &stringREF << std::endl;

	std::cout << "\nValue of string: " << string << std::endl;
	std::cout << "Value of string: " << *stringPTR << std::endl;
	std::cout << "Value of string: " << stringREF << std::endl;
}