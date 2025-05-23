/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emalungo <emalungo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 11:32:34 by emalungo          #+#    #+#             */
/*   Updated: 2025/05/21 13:18:25 by emalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!";
	std::cout << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!";
	std::cout << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.";
	std::cout << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl;
}

void Harl::complain(std::string level)
{
	int i;

	i = 0;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (i < 4)
	{
		if (levels[i] == level)
			break;
		i++;
	}
	switch (i)
	{
	case 0:
		std::cout << "[ DEBUG ]" << std::endl;
		debug();
		info();
		warning();
		error();
		break;
	case 1:
		std::cout << "[ INFO ]" << std::endl;
		info();
		warning();
		error();
		break;
	case 2:
		std::cout << "[ WARNING ]" << std::endl;
		warning();
		error();
		break;
	case 3:
		std::cout << "[ ERROR ]" << std::endl;
		error();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
}