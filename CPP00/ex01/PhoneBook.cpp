#include "PhoneBook.hpp"

void PhoneBook::PrintHeader() {
	for (int i = 0; i < (MaxLength * 4 + 5); i++)
		std::cout << "_";
	std::cout << "\n";
	std::cout << "|     Index|First Name| Last Name|  Nickname|\n";
}

void PhoneBook::PrintListForm(int id) {
	std::cout << "|";
	std::stringstream ss;
	ss << id;
	std::string IdText = ss.str();

	for (int i = (MaxLength - IdText.size()); i > 0; i--)
		std::cout << ' ';
	std::cout << id;
	std::cout << "|";
	std::string FirstName = Contacts[id].GetFirstName();
	if (FirstName.size() > MaxLength) {
		FirstName.resize(MaxLength);
		FirstName[MaxLength - 1] = '.';
	} else {
		for (int i = (MaxLength - FirstName.size()); i > 0; i--)
			std::cout << ' ';
	}
	std::cout << FirstName;
	std::cout << "|";

	std::string LastName = Contacts[id].GetLastName();
	if (LastName.size() > MaxLength) {
		LastName.resize(MaxLength);
		LastName[MaxLength - 1] = '.';
	} else {
		for (int i = (MaxLength - LastName.size()); i > 0; i--)
			std::cout << ' ';
	}
	std::cout << LastName;
	std::cout << "|";

	std::string Nickname = Contacts[id].GetNickname();
	if (Nickname.size() > MaxLength) {
		Nickname.resize(MaxLength);
		Nickname[MaxLength - 1] = '.';
	} else {
		for (int i = (MaxLength - Nickname.size()); i > 0; i--)
			std::cout << ' ';
	}
	std::cout << Nickname;
	std::cout << "|\n";
}

void PhoneBook::PrintBottom() {
	for (int i = 0; i < 45; i++)
		std::cout << "";
}

void PhoneBook::PrintMiddle() {
	for (
		  int id = 0;
		  id < MaxId; id++) {
		if (!Contacts[id].ContactExists())
			break;
		PrintListForm(id);
	}
}

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

void PhoneBook::ListPhoneBook() {
	if (!Contacts[0].ContactExists()) {
		std::cout << "No contacts on the list";
		return;
	}
	PrintHeader();
	PrintMiddle();
}