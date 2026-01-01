#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->nextIndex = 0;
	this->totalContacts = 0;
}

void PhoneBook::addContact(const Contact &newContact) {
    this->contacts[this->nextIndex] = newContact;
    this->nextIndex++;
    if (this->totalContacts < 8)
        this->totalContacts++;
    if (this->nextIndex >= 8)
        this->nextIndex = 0;
}

void PhoneBook::searchAndPrint(int index) const {
    if (index < 0 || index >= this->totalContacts) {
        std::cout << "Error: Invalid index." << std::endl;
		return;
    }
    this->contacts[index].displayFullContact();
}

void PhoneBook::displayContacts() const {
    std::cout << " ___________________________________________ " << std::endl;
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "|__________|__________|__________|__________|" << std::endl;

    for (int i = 0; i < this->totalContacts; i++) {
        this->contacts[i].displayTableEntry(i);
    }
    std::cout << "|__________|__________|__________|__________|" << std::endl;
}


