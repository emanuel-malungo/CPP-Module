/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emalungo <emalungo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 13:28:16 by emalungo          #+#    #+#             */
/*   Updated: 2025/05/16 08:33:52 by emalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int	main(void)
{
	Zombie *heapZombie = newZombie("HeapZombie");

	heapZombie->announce();
	delete heapZombie;
	randomChump("StackZombie");
	return (0);
}