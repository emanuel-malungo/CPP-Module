/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emalungo <emalungo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 08:44:10 by emalungo          #+#    #+#             */
/*   Updated: 2025/05/16 09:07:33 by emalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	int i;
	Zombie *newZombie;

	i = 0;
	newZombie = new Zombie[N];
	while (i < N)
	{
		newZombie[i].setName(name);
		newZombie[i].announce();
		i++;
	}
	return (newZombie);
}