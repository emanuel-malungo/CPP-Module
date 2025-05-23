/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emalungo <emalungo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 08:44:37 by emalungo          #+#    #+#             */
/*   Updated: 2025/05/16 09:04:16 by emalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
  private:
	std::string name;

  public:
	Zombie();
	~Zombie();
	std::string getName(void);
	void setName(std::string name);
    void announce(void);
};

Zombie* zombieHorde( int N, std::string name);

#endif