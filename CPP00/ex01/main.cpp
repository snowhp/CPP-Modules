#include "header.hpp"


int main() {
	std::cout << "Welcome to your phonebook!\n";
	sleep(2);
	std::system("clear");
	std::cout << "Loading...\n";
	sleep(1);
	std::system("clear");
	PhoneBook Book;
	int id = 0;

	while (1) {
		std::cout << "\nPlease input...\n";
		std::string input;
		std::cin >> input;
		std::system("clear");
		if (input == "ADD") {

			while (Book.isContactUsed(id)) {
				if (id == MaxId - 1) {
					id = 0;
					break;
				}
				id++;
			}


			std::string First;
			std::string Last;
			std::string Nick;
			std::string Phone;
			std::string Secret;

			std::system("clear");
			std::cout << "First Name: ";
			std::cin >> First;
			if (First.empty()) {
				std::cout << "You can't have empty fields. Try again...\n";
				continue;
			}
			std::cout << "\nLast Name: ";
			std::cin >> Last;
			if (Last.empty()) {
				std::cout << "You can't have empty fields. Try again...\n";
				continue;
			}
			std::cout << "\nNick Name: ";
			std::cin >> Nick;
			if (Nick.empty()) {
				std::cout << "You can't have empty fields. Try again...\n";
				continue;
			}
			std::cout << "\nPhone Number: ";
			std::cin >> Phone;
			if (Phone.empty()) {
				std::cout << "You can't have empty fields. Try again...\n";
				continue;
			}

			std::cout << "\nDarkest Secret: ";
			std::cin >> Secret;
			if (Secret.empty()) {
				std::cout << "You can't have empty fields. Try again...\n";
				continue;
			}
			Book.SetContactId(id, First, Last, Nick, Phone, Secret);
		} else if (input == "S") {
			std::system("clear");
			Book.ListPhoneBook();
			std::cout << "\nType id for full informations: ";
			std::string input;
			std::cin >> input;
			const char *input2 = input.c_str();
			int id = atoi(input2);
			if ((id == 0 && input2[0] != '0' && input2[1] == 0) || id < 0 || id > 10 || !Book.isContactUsed(id)) {
				std::cout << "Invalid ID";
				sleep(1);
				std::system("clear");
				continue;
			}
			std::system("clear");
			Book.IdPrintContact(id);
		} else if (input == "EXIT") {
			return (0);
		}
	}
}
