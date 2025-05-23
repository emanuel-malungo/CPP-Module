/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emalungo <emalungo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 12:10:03 by emalungo          #+#    #+#             */
/*   Updated: 2025/05/16 12:38:11 by emalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = NULL;
}

HumanB::~HumanB()
{
}

void HumanB::setName(std::string name)
{
	this->name = name;
}

std::string HumanB::getName(void) const
{
	return (name);
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack(void) const
{
	if (weapon)
	{
		std::cout << name << " attacks with their " << weapon->getType();
		std::cout << std::endl;
	}
	else
		std::cout << name << " has no weapon to attack with!" << std::endl;
}
