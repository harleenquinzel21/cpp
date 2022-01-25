#include "Phonebook.class.hpp"

Phonebook::Phonebook()
{
	this->size = 0;
	return ;
}

Phonebook::~Phonebook()
{
	return ;
}

void Phonebook::add_contact(Contact new_contact)
{
	int i = 0;

	while (i < this->size)
		i++;
	if (i == 8)
	{
		i = 0;
		while (i < MAX_CONTACT - 1)
		{
			this->arr[i] = this->arr[i + 1];
			i++;
		}
		this->size -= 1;
	}
	this->arr[i] = new_contact;
	this->size += 1;
}

