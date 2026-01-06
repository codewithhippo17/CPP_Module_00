#include "Contact.hpp"
#include <iomanip>
Contact::Contact() {}

void Contact::setContact(std::string fn, std::string ln, std::string nn,
                         std::string pn, std::string ds) {

  this->firstName = fn;
  this->lastName = ln;
  this->nickName = nn;
  this->phoneNumber = pn;
  this->darkestSecret = ds;
}

std::string truncate(std::string input) {
  if (input.length() > 0 && input.length() < 9)
    return input;
  return input.substr(0, 9) + ".";
}

std::string Contact::getFirstName() const { return firstName; }

std::string Contact::getLastName() const { return lastName; }

std::string Contact::getNickName() const { return nickName; }

void Contact::displayTableEntry(int index) const {
  std::cout << "|" << std::setw(10) << index;
  std::cout << "|" << std::setw(10) << truncate(firstName);
  std::cout << "|" << std::setw(10) << truncate(lastName);
  std::cout << "|" << std::setw(10) << truncate(nickName);
  std::cout << "|" << std::endl;
}

void Contact::displayFullContact() const {
  if (firstName.empty())
    return;
  std::cout << "First Name: " << firstName << std::endl;
  std::cout << "Last Name: " << lastName << std::endl;
  std::cout << "Nickname: " << nickName << std::endl;
  std::cout << "Phone Number: " << phoneNumber << std::endl;
  std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}
