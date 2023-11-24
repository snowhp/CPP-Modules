//
// Created by user on 06-11-2023.
//

#ifndef EX01_PHONEBOOK_H
#define EX01_PHONEBOOK_H

#include "Contact.hpp"
#include "header.hpp"

class PhoneBook {
private:
    Contact Contacts[MaxId];

    std::string GetFirstName(int id);

    std::string GetLastName(int id);

    std::string GetNickname(int id);


public:
    void
    SetContactId(int id, std::string First, std::string Last, std::string Nick, std::string Phone, std::string Secret);

    void IdPrintContact(int id);

    int isContactUsed(int id);

    void ListPhoneBook();
};


#endif //EX01_PHONEBOOK_H
