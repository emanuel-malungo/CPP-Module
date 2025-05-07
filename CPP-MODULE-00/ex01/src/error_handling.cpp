/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emalungo <emalungo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 16:37:38 by emalungo          #+#    #+#             */
/*   Updated: 2025/05/07 16:37:53 by emalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

int PhoneBook::check_name(std::string name)
{
	int i;

	i = 0;
	if (name.length() < 2)
	{
		std::cerr << "Error:\n Name must have at least 2 characters." << std::endl;
		return (0);
	}
	if (name[i] < 'A' || name[i] > 'Z')
	{
		std::cerr << "Error:\n Name must start with an uppercase letter." << std::endl;
		return (0);
	}
	while (name[i] != '\0')
	{
		if (name[i] >= '0' && name[i] <= '9')
		{
			std::cerr << "Error:\n Name must not start with a number." << std::endl;
			return (0);
		}
		i++;
	}
	return (1);
}