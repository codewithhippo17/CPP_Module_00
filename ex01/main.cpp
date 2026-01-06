#include "Contact.hpp"
#include "PhoneBook.hpp"

std::string getInput(std::string prompt) {
  std::string input = "";
  while (true) {
    std::cout << prompt;
    if (!std::getline(std::cin, input))
      break;
    if (!input.empty())
      break;
    std::cout << "Field cannot be empty. Please try again." << std::endl;
  }
  return input;
}

int main() {
  PhoneBook book;
  std::string command;

  std::cout << "Welcome to the 80s PhoneBook!" << std::endl;
  std::cout << "The program only accepts ADD, SEARCH and EXIT." << std::endl;
  while (1 != 0) {
    if (!std::getline(std::cin, command))
      break;

    if (command == "EXIT") {
      std::cout << "GoodBye;" << std::endl;
      break;
    }

    else if (command == "ADD") {
      std::cout << "Adding new contact..." << std::endl;
      std::string fn = getInput("Enter First Name: ");
      std::string ln = getInput("Enter Last Name: ");
      std::string nn = getInput("Enter Nickname: ");
      std::string pn = getInput("Enter Phone Number: ");
      std::string ds = getInput("Enter Darkest Secret: ");

      Contact tempContact;

      tempContact.setContact(fn, ln, nn, pn, ds);
      book.addContact(tempContact);
      std::cout << "Contact added successfully!" << std::endl;
    }

    else if (command == "SEARCH") {
      book.displayContacts();
      std::cout << "Enter index to view details: ";
      std::string indexStr;
      if (!std::getline(std::cin, indexStr))
        break;

      if (indexStr.length() == 1 && isdigit(indexStr[0])) {
        int index = indexStr[0] - '0';
        book.searchAndPrint(index);
      } else {
        std::cout << "Invalid index format." << std::endl;
      }
    }
  }
}
