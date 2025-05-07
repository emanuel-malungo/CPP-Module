/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emalungo <emalungo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:16:01 by emalungo          #+#    #+#             */
/*   Updated: 2025/05/07 16:18:31 by emalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

int	main(void)
{
	std::string input;

	while (1)
	{
		std::cin.clear();
		std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			break ;
	}
	return (0);
}