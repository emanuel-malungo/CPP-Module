/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emalungo <emalungo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 10:06:50 by emalungo          #+#    #+#             */
/*   Updated: 2025/05/16 11:51:15 by emalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "./Weapon.hpp"
# include <iostream>

class HumanA
{
  private:
	std::string name;
	Weapon& weapon;

  public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();
	std::string getName(void) const;
	void setName(std::string name);
	void attack(void) const;
};

#endif