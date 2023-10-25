/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-sous <tde-sous@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:45:20 by tde-sous          #+#    #+#             */
/*   Updated: 2023/10/25 12:49:38 by tde-sous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <unistd.h>

class Contact
{
	private:
		std::string FirstName;
		std::string LastName;
		std::string NickName;
		std::string PhoneNumber;
		std::string DarkestSecret;
	public:
		void SetContact(std::string First, std::string Last, std::string Nick, std::string Phone, std::string Secret)
		{
			this->FirstName = First;
			this->LastName = Last;
			this->NickName = Nick;
			this->PhoneNumber = Phone;
			this->DarkestSecret = Secret;
		}
		void PrintContact()
		{
			std::cout << (this->FirstName + "\n" + this->LastName + "\n" + this->NickName + "\n" + this->PhoneNumber + "\n" + this->DarkestSecret);
		}
};

class PhoneBook
{
	private:
		Contact contacts[8];
	public:
		void SetContactId(int id, std::string First, std::string Last, std::string Nick, std::string Phone, std::string Secret)
		{
			contacts[id].SetContact(First, Last, Nick, Phone, Secret);
		}

};

