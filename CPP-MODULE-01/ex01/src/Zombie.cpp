/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emalungo <emalungo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 08:46:35 by emalungo          #+#    #+#             */
/*   Updated: 2025/05/23 19:47:17 by emalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie::Zombie()
{
	name = "";
}

Zombie::~Zombie()
{
    std::cout << name << " is destroyed" << std::endl;
}

std::string Zombie::getName(void)
{
    return (name);
}

void Zombie::setName(std::string name)
{
    this->name = name;
}

void Zombie::announce(void)
{
    std::cout << getName() << " BraiiiiiiinnnzzzZ..." << std::endl;
}