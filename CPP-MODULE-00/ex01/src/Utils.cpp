/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emalungo <emalungo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 15:57:35 by emalungo          #+#    #+#             */
/*   Updated: 2025/05/10 18:58:38 by emalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Utils.hpp"

int	getUserInput(std::string input, int indexIput, std::string prompt, int mod)
{
	while (true)
	{
		std::cout << prompt << ": ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			return (0);
		if (mod == 0)
		{
			if (checkName(input) == 1)
				return (1);
		}
		else if (mod == 1)
		{
			if (checkPhoneNumber(input) == 1)
				return (1);
		}
		else if (mod == 2)
		{
			if (checkDarckestSecret(input) == 1)
				return (1);
		}
		else if (input == "" && indexIput != -1 && mod == 3)
		{
			if (checkIndexInput(indexIput) == 1)
				return (1);
		}
	}
	return (0);
}

void	displayHeader(void)
{
	std::cout << std::setw(10) << "Index"
				<< "|" << std::setw(10) << "First name"
				<< "|" << std::setw(10) << "Last name"
				<< "|" << std::setw(10) << "Nick name"
				<< "|" << std::setw(10) << "Phone number"
				<< "|" << std::setw(10) << "DarkestSecret" << std::endl;
	std::cout << std::setfill('-') << std::setw(43) << "-" << std::setfill(' ') << std::endl;
}
