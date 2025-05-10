/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emalungo <emalungo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:16:23 by emalungo          #+#    #+#             */
/*   Updated: 2025/05/10 18:07:44 by emalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	correntIndex = 0;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::addContact(void)
{
	Contact	newContact;

	std::string input;
	system("clear");
	std::cout << "### ADD NEW CONTACT 😊 ###" << std::endl;
	getUserInput(input, 0, "Enter the first name", 0);
	newContact.setFirstName(input);
	if (!getUserInput(input, 0, "Enter the last name", 0))
		return ;
	newContact.setLastName(input);
	if (!getUserInput(input, 0, "Enter the nick name", 0))
		return ;
	newContact.setNickName(input);
	if (!getUserInput(input, 0, "Enter the phone number", 1))
		return ;
	newContact.setPhoneNumber(input);
	if (!getUserInput(input, 0, "Enter the darkest secret", 2))
		return ;
	newContact.setDarkestSecret(input);
	if (correntIndex < MAX_CONTACTS)
		contacts[correntIndex++] = newContact;
	else
	{
		contacts[oldestIndex] = newContact;
		oldestIndex = (oldestIndex + 1) % MAX_CONTACTS;
	}
	std::cout << "Contact added successfully!" << std::endl;
}

void PhoneBook::searchContact(void)
{
	system("clear");
	int indexInput;
	
	if (correntIndex == 0)
	{
		std::cerr << "No contact saved." << std::endl;
		return ;
	}
	displayAllContacts();
	if (!getUserInput("", indexInput, "Enter the contacts index to view the details", 3))
		return ;
	displayContact(indexInput);
}

void PhoneBook::displayAllContacts(void)
{
	int i;

	i = -1;
	displayHeader();
	while (++i < correntIndex)
	{
		
	}
	
}

void PhoneBook::displayContact(int index)
{
	system("clear");
	std::cout << "### CONTACT DETAILS ###" << std::endl;
	std::cout << "First name: " << contacts[index].getFirstName() << std::endl;
	std::cout << "Last name: " << contacts[index].getLastName() << std::endl;
	std::cout << "Nick name: " << contacts[index].getNickName() << std::endl;
	std::cout << "Phone number: " << contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << contacts[index].getDarkestSecret() << std::endl;
}
