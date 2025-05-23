/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emalungo <emalungo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 10:08:36 by emalungo          #+#    #+#             */
/*   Updated: 2025/05/16 11:51:08 by emalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
	: name(name), weapon(weapon) 
{
}

HumanA::~HumanA()
{
}

std::string HumanA::getName(void) const{
    return (name);
}

void HumanA::setName(std::string name)
{
    this->name = name;
}

void HumanA::attack(void) const
{
    std::cout << getName() << " attacks with their " << weapon.getType();
    std::cout << std::endl;
}