#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook{
	private:
		Contact contacts[8];
		int nextIndex;
		int totalContacts;
	public:
		PhoneBook();
		void addContact(const Contact &newContact);
		void displayContacts() const;
		void searchAndPrint(int index) const;
};

#endif

