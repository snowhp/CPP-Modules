// Created by tde-sous for 42 porto

#include "Contact.hpp"


void Contact::SetContact(std::string First, std::string Last, std::string Nick, std::string Phone, std::string Secret) {
	FirstName = First;
	LastName = Last;
	Nickname = Nick;
	PhoneNumber = Phone;
	DarkestSecret = Secret;
	Initialized = true;
}

void Contact::PrintContact() {
	std::cout << (FirstName + "\n" + LastName + "\n" + Nickname + "\n" + PhoneNumber +
			  "\n" + DarkestSecret + "\n");
}

int Contact::ContactExists() {
	return (Initialized);
}

std::string Contact::GetFirstName() {
	return (FirstName);
}

std::string Contact::GetLastName() {
	return (LastName);
}

std::string Contact::GetNickname() {
	return (Nickname);
}