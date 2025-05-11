/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emalungo <emalungo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:16:23 by emalungo          #+#    #+#             */
/*   Updated: 2025/05/11 09:49:10 by emalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	currentIndex = 0;
    oldestIndex = 0;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::addContact(void)
{
    Contact newContact;
    std::string input;
    
    system("clear");
    std::cout << "### ADD NEW CONTACT ###" << std::endl;
    
    if (!getUserInput(input, "Enter the first name", 0))
        return;
    newContact.setFirstName(input);
    
    if (!getUserInput(input, "Enter the last name", 0))
        return;
    newContact.setLastName(input);
    
    if (!getUserInput(input, "Enter the nick name", 0))
        return;
    newContact.setNickName(input);
    
    if (!getUserInput(input, "Enter the phone number", 1))
        return;
    newContact.setPhoneNumber(input);
    
    if (!getUserInput(input, "Enter the darkest secret", 2))
        return;
    newContact.setDarkestSecret(input);
    
    if (currentIndex < MAX_CONTACTS)
        contacts[currentIndex++] = newContact;
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
	
	indexInput = 0;
	if (currentIndex == 0)
	{
		std::cerr << "No contact saved." << std::endl;
		return ;
	}
	displayAllContacts();
	if (!getUserInput(indexInput, "Enter the contact's index to view the details", currentIndex))
        return ;
	displayContact(indexInput);
}

void PhoneBook::displayAllContacts(void)
{
    int i;

    displayHeader();
    i = -1;
    while (++i < currentIndex)
    {
        std::cout << std::setw(10) << i;
        std::cout << "|" << printTableCell(contacts[i].getFirstName());
        std::cout << "|" << printTableCell(contacts[i].getLastName());
        std::cout << "|" << printTableCell(contacts[i].getNickName());
        std::cout << std::endl;
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
