/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emalungo <emalungo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 15:57:35 by emalungo          #+#    #+#             */
/*   Updated: 2025/05/11 09:26:28 by emalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Utils.hpp"

bool getUserInput(std::string &input, const std::string &prompt, int validationType)
{
    while (true)
    {
        std::cout << prompt << ": ";
        std::getline(std::cin, input);
        
        if (std::cin.eof())
            return false;
        if (validationType == 0)
        {
            if (checkName(input))
                return true;
        }
        else if (validationType == 1)
        {
            if (checkPhoneNumber(input))
                return true;
        }
        else if (validationType == 2)
        {
            if (checkDarckestSecret(input))
                return true;
        }
        else if (validationType == -1)
        {
            return true;
        }
    }
    return false;
}

bool getUserInput(int &indexInput, const std::string &prompt, int currentIndex)
{
    std::string input;
    
    while (true)
    {
        std::cout << prompt << ": ";
        std::getline(std::cin, input);
        
        if (std::cin.eof())
            return false;
        bool validNumber = true;
        for (size_t i = 0; i < input.length(); i++)
        {
            if (!std::isdigit(input[i]))
            {
                std::cerr << "Error\nPlease enter a valid number." << std::endl;
                validNumber = false;
                break;
            }
        }
        if (!validNumber)
            continue;
        indexInput = std::atoi(input.c_str());
        if (indexInput < 0 || indexInput >= currentIndex || indexInput >= 8)
        {
            std::cerr << "Error\nIndex out of range. Valid range: 0 to " 
                      << std::min(currentIndex - 1, 8 - 1) << "." << std::endl;
            continue;
        }
        
        return (true);
    }
    return (false);
}

void	displayHeader(void)
{
	std::cout << std::setw(10) << "Index"
				<< "|" << std::setw(10) << "First name"
				<< "|" << std::setw(10) << "Last name"
				<< "|" << std::setw(10) << "Nick name" << std::endl;
}

std::string printTableCell(std::string str)
{
    if (str.length() > 10)
        return (str.substr(0, 9) + ".");
    return (std::string(10 - str.length(), ' ') + str);
}
