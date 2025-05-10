/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ErrorHandling.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emalungo <emalungo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 16:37:38 by emalungo          #+#    #+#             */
/*   Updated: 2025/05/07 16:37:53 by emalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ErrorHandling.hpp"

int	checkName(std::string name)
{
	int	i;

	i = 0;
	if (name.empty())
	{
		std::cerr << "Error:\nName cannot be empty." << std::endl;
		return (0);
	}
	if (name.length() < 2)
	{
		std::cerr << "Error:\nName must have at least 2 characters." << std::endl;
		return (0);
	}
	if (!std::isupper(name[0]))
	{
		std::cerr << "Error:\nName must start with an uppercase letter." << std::endl;
		return (0);
	}
	while (name[i] != '\0')
	{
		if (!((name[i] >= 'a' && name[i] <= 'z') || (name[i] >= 'A'
					&& name[i] <= 'Z')))
		{
			std::cerr << "Error:\nName must contain only letters." << std::endl;
			return (0);
		}
		i++;
	}
	return (1);
}

int	checkPhoneNumber(std::string phoneNumber)
{
	int	i;

	i = 0;
	if (phoneNumber.empty())
	{
		std::cerr << "Error\nThe phone number cannot be an empty field" << std::endl;
		return (0);
	}
	while (phoneNumber[i] != '\0')
	{
		if (!(phoneNumber[i] >= '0' && phoneNumber[i] <= '9'))
		{
			std::cerr << "Error\nThe phone number must contain only digits." << std::endl;
			return (0);
		}
		i++;
	}
	if (phoneNumber.length() != 9)
	{
		std::cerr << "Error\nThe phone number must have 9 digits" << std::endl;
		return (0);
	}
	return (1);
}

int	checkDarckestSecret(std::string darkestSecret)
{
	if (darkestSecret.empty())
	{
		std::cerr << "Error\nThe darkest secret cannot be empty." << std::endl;
		return (0);
	}
	if (darkestSecret.length() < 3)
	{
		std::cerr << "Error\nThe darkest secret is too short. Must be at least 3 characters." << std::endl;
		return (0);
	}
	if (darkestSecret.length() > 100)
	{
		std::cerr << "Error\nThe darkest secret is too long. Max 100 characters allowed." << std::endl;
		return (0);
	}
	return (1);
}

int checkIndexInput(int indexInput)
{
	if (indexInput < 0 || indexInput > 7)
	{
		std::cerr << "Error\nIndex out of range. Valid range: 0 to 7." << std::endl;
		return (0);
	}
	return (1);
}


