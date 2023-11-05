/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-sous <tde-sous@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:45:20 by tde-sous          #+#    #+#             */
/*   Updated: 2023/11/05 11:47:16 by tde-sous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sstream>

# define MaxLength 10 /* Use bigger then 10 */
# define MaxId 8      /* Max Id's to show */

class Contact {
private:
    std::string FirstName;
    std::string LastName;
    std::string Nickname;
    std::string PhoneNumber;
    std::string DarkestSecret;
    bool Initialized;
public:
    Contact() : Initialized(false) {}

    void SetContact(std::string First, std::string Last, std::string Nick, std::string Phone, std::string Secret) {
	    this->FirstName = First;
	    this->LastName = Last;
	    this->Nickname = Nick;
	    this->PhoneNumber = Phone;
	    this->DarkestSecret = Secret;
	    this->Initialized = true;
    }

    void PrintContact() {
	    std::cout << (this->FirstName + "\n" + this->LastName + "\n" + this->Nickname + "\n" + this->PhoneNumber +
				"\n" + this->DarkestSecret + "\n");
    }

    int ContactExists() {
	    return (Initialized);
    }

    std::string GetFirstName() {
	    return (this->FirstName);
    }

    std::string GetLastName() {
	    return (this->LastName);
    }

    std::string GetNickname() {
	    return (this->Nickname);
    }

};

class PhoneBook {
private:
    Contact Contacts[MaxId];

    void PrintHeader() {
	    for (int i = 0; i < (MaxLength * 4 + 5); i++)
		    std::cout << "_";
	    std::cout << "\n";
	    std::cout << "|     Index|First Name| Last Name|  Nickname|\n";
    }

    void PrintListForm(int id) {
	    std::cout << "|";
	    std::stringstream ss;
	    ss << id;
	    std::string idtxt = ss.str();

	    for (int i = (MaxLength - idtxt.size()); i > 0; i--)
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

    void PrintBottom() {
	    for (int i = 0; i < 45; i++)
		    std::cout << "";
    }

    void PrintMiddle() {
	    for (
			int id = 0;
			id <= MaxId; id++) {
		    if (Contacts[id].GetFirstName().empty())
			    break;
		    PrintListForm(id);
	    }
    }

    std::string GetFirstName(int id) {
	    return (Contacts[id].GetFirstName());
    }

    std::string GetLastName(int id) {
	    return (Contacts[id].GetLastName());
    }

    std::string GetNickname(int id) {
	    return (Contacts[id].GetNickname());
    }

public:
    void
    SetContactId(int id, std::string First, std::string Last, std::string Nick, std::string Phone, std::string Secret) {
	    Contacts[id].SetContact(First, Last, Nick, Phone, Secret);
    }

    void IdPrintContact(int id) {
	    Contacts[id].PrintContact();
    }

    int isContactUsed(int id) {
	    return (this->Contacts[id].ContactExists());
    }

    void ListPhoneBook() {
	    if (!Contacts[0].ContactExists()) {
		    std::cout << "No contacts on the list";
		    return;
	    }
	    PrintHeader();
	    PrintMiddle();
	    std::cout << "\nType id for full informations: ";
	    std::string input;
	    std::cin >> input;
	    const char *input2 = input.c_str();
	    char *input3;
	    int id = atoi(input2);
	    strtol(input2, &input3, 10);
	    if (*input3 == 0 || id < 0 || id > 10 || !Contacts[id].ContactExists()) {
		    std::cout << "Invalid ID";
		    return;
	    }
	    std::cout << "ID is:" << id;
    }
};

