/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emalungo <emalungo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:16:01 by emalungo          #+#    #+#             */
/*   Updated: 2025/05/11 08:23:25 by emalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

int	main(void)
{
	std::string command;
	PhoneBook phoneBook;

	while (1)
	{
		std::cin.clear();
		std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, command);
		if (command == "EXIT" || std::cin.eof())
			break ;
		else if (command == "ADD")
			phoneBook.addContact();
		else if (command == "SEARCH")
			phoneBook.searchContact();
	}
	return (0);
}