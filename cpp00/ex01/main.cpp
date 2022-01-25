#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "Phonebook.class.hpp"
#include "Contact.class.hpp"


void add_command(std::string add[])
{
	std::cout << "Enter first name: ";
	std::cin >> add[0];
	std::cout << "Enter last name: ";
	std::cin >> add[1];
	std::cout << "Enter nickname name: ";
	std::cin >> add[2];
	std::cout << "Enter phonenumber: ";
	std::cin >> add[3];
	std::cout << "Enter darkest secret: ";
	std::cin >> add[4];
}

void display_field(std::string str)
{
	std::cout << std::setw(10);
	if (str.size() > 10)
		std::cout << str.substr(0, 9) + ".";
	else
		std::cout << str;

}

void display_phonebook(Phonebook book)
{
	int i = 0;


	std::cout << "     index|first name| last name|  nickname" << std::endl;
	while (i < book.size)
	{
		std::cout << std::setw(10);
		std::cout << i + 1 << "|";
		display_field(book.arr[i].first_name);
		std::cout << "|";
		display_field(book.arr[i].last_name);
		std::cout << "|";
		display_field(book.arr[i].nickname);
		std::cout << "|";
		std::cout << std::endl;
		i++;
	}
}

void display_contact(Phonebook book)
{
	(void)book;
	int id;
	std::string str;
	std::cout << "Enter the index of the desired contact: ";
	std::cin >> str;
	if (str.size() == 1 && str[0] >= '1' && str[0] <= '8')
	{
		id = atoi(str.c_str());
		std::cout << "first name: " << book.arr[id - 1].first_name << std::endl;
		std::cout << "last name: " << book.arr[id - 1].last_name << std::endl;
		std::cout << "nickname: " << book.arr[id - 1].nickname << std::endl;
		std::cout << "phone_number: " << book.arr[id - 1].phone_number << std::endl;
		std::cout << "darkest_secret: " << book.arr[id - 1].darkest_secret << std::endl;
	}
	else
		std::cout << "Incorrect index!" << std::endl;
	return ;
}

int	main(void)
{
	Phonebook book;
	std::string cmd;
	std::string add[5];

	std::cout << "Enter your command: " ;
	std::cin >> cmd;
	while (1)
	{
		if (cmd == "EXIT" || cmd.c_str() == NULL)
		{
			return (0);
		}
		else if (cmd == "ADD")
		{
			add_command(add);
			book.add_contact(Contact(add));
			cmd = "";
		}
		else if (cmd == "SEARCH")
		{
			if (book.size == 0)
			{
				std::cout << "There are no entries yet!" << std::endl;
				cmd = "";
			}
			else
			{
				display_phonebook(book);
				display_contact(book);
				cmd = "";
			}
		}
		else
		{
			std::cout << "Enter your command: " ;
			std::cin >> cmd;
		}
	}
	return 0;
}
