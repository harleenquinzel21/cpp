#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#define MAX_CONTACT 8

#include "Contact.class.hpp"

class Phonebook
{
	public:

		Contact arr[MAX_CONTACT];
		int size;

		Phonebook();
		~Phonebook();
		void add_contact(Contact new_contact);
};

#endif


