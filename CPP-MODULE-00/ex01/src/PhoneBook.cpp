/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emalungo <emalungo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:16:23 by emalungo          #+#    #+#             */
/*   Updated: 2025/05/07 16:44:12 by emalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"


PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::addContact(void)
{
	Contact	newContact;

	std::string input;
	std::cout << "### ADD NEW CONTACT ### 😊";
	while (1)
	{
		std::cin.clear();
		std::cout << "Enter your first name: ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			return ;
		if (check_name(input) == 1)
			break ;
	}
	newContact.setFirstName(input);
	while (1)
	{
		std::cout << "Enter your last name: ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			return ;
		if (check_name(input) == 1)
			break ;
	}
	newContact.setLastName(input);
}
