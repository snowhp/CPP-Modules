/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-sous <tde-sous@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:51:20 by tde-sous          #+#    #+#             */
/*   Updated: 2023/10/25 12:51:24 by tde-sous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"


int	main()
{
	std::cout << "Welcome to your phonebook!\n";
	//sleep(2);
	std::system("clear");
	std::cout << "Loading...\n";
	//sleep(1);
	std::system("clear");
	PhoneBook book;

	while(1)
	{
		std::cout << "Please input...\n";
		std::string input;
		std::cin >> input;
		std::system("clear");
		if (input == "ADD")
		{
			Contact contact;

			std::string First;
			std::string Last;
			std::string Nick;
			std::string Phone;
			std::string Secret;

			std::system("clear");

			std::cout << "First Name: ";
			std::cin >> First;
			if (First.empty())
				std::cout << "You can't have empty fields. Try again...\n";

			std::cout << "\nLast Name: ";
			std::cin >> Last;
			if (Last.empty())
				std::cout << "You can't have empty fields. Try again...\n";

			std::cout << "\nNick Name: ";
			std::cin >> Nick;
			if (Nick.empty())
				std::cout << "You can't have empty fields. Try again...\n";

			std::cout << "\nPhone Number: ";
			std::cin >> Phone;
			if (Phone.empty())
				std::cout << "You can't have empty fields. Try again...\n";

			std::cout << "\nDarkest Secret: ";
			std::cin >> Secret;
			if (Secret.empty())
				std::cout << "You can't have empty fields. Try again...\n";

			contact.SetContact(First, Last, Nick, Phone, Secret);
			std::cout << "\nPrinting info: ";
			contact.PrintContact();
		}
		else if (input == "SEARCH")
		{

		}
		else if (input == "EXIT")
		{
			return (0);
		}
	}
}
