#include "PhoneBook.hpp"

std::string PhoneBook::GetFirstName(int id) {
	return (Contacts[id].GetFirstName());
}

std::string PhoneBook::GetLastName(int id) {
	return (Contacts[id].GetLastName());
}

std::string PhoneBook::GetNickname(int id) {
	return (Contacts[id].GetNickname());
}

void
PhoneBook::SetContactId(int id, std::string First, std::string Last, std::string Nick, std::string Phone,
				std::string Secret) {
	Contacts[id].SetContact(First, Last, Nick, Phone, Secret);
}

void PhoneBook::IdPrintContact(int id) {
	Contacts[id].PrintContact();
}

int PhoneBook::isContactUsed(int id) {
	return (Contacts[id].ContactExists());
}

void TruncateAndReplace(std::string &str) {
	if (str.length() > MaxLength) {
		str.resize(MaxLength - 1);
		str += ".";
	}
}

void PhoneBook::ListPhoneBook() {
	std::string separator = "+----------+----------+----------+----------+\n";
	std::cout << separator
		    << std::right
		    << "|" << std::setw(10) << "Index"
		    << "|" << std::setw(10) << "First Name"
		    << "|" << std::setw(10) << "Last Name"
		    << "|" << std::setw(10) << "Nick Name"
		    << "|\n" << separator;
	for (int id = 0; Contacts[id].ContactExists(); id++) {
		std::string firstname = GetFirstName(id);
		TruncateAndReplace(firstname);
		std::string lastname = GetLastName(id);
		TruncateAndReplace(lastname);
		std::string nickname = GetNickname(id);
		TruncateAndReplace(nickname);
		std::cout << "|" << std::setw(10) << id
			    << "|" << std::setw(10) << firstname
			    << "|" << std::setw(10) << lastname
			    << "|" << std::setw(10) << nickname
			    << "|" << std::endl;
	}
	std::cout << separator;
}
