/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-sous <tde-sous@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:45:20 by tde-sous          #+#    #+#             */
/*   Updated: 2023/10/27 12:23:20 by tde-sous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

class Contact
{
	private:
		std::string FirstName;
		std::string LastName;
		std::string NickName;
		std::string PhoneNumber;
		std::string DarkestSecret;
		bool Initialized;
	public:
		Contact() : Initialized(false)
		{}
		void SetContact(std::string First, std::string Last, std::string Nick, std::string Phone, std::string Secret)
		{
			this->FirstName = First;
			this->LastName = Last;
			this->NickName = Nick;
			this->PhoneNumber = Phone;
			this->DarkestSecret = Secret;
			this->Initialized = true;
		}
		void PrintContact()
		{
			std::cout << (this->FirstName + "\n" + this->LastName + "\n" + this->NickName + "\n" + this->PhoneNumber + "\n" + this->DarkestSecret + "\n");
		}
		int	ContactExists()
		{
			return (Initialized);
		}
};

class PhoneBook
{
	private:
		Contact Contacts[8];
		void	PrintHeader()
		{
			for(int i = 0; i < 45; i++)
				std::cout << "_";
			std::cout << "\n";
		}
		void	PrintList()
		{
			std::cout << "|     Index|First Name| Last Name|  Nickname|";
		}
	public:
		void	SetContactId(int id, std::string First, std::string Last, std::string Nick, std::string Phone, std::string Secret)
		{
			Contacts[id].SetContact(First, Last, Nick, Phone, Secret);
		}
		void	IdPrintContact(int id)
		{
			Contacts[id].PrintContact();
		}
		int	isContactUsed(int id)
		{
			return (this->Contacts[id].ContactExists());
		}
		void	ListPhoneBook()
		{
			PrintHeader();
			PrintList();
			//PrintBottom();
		}
};

