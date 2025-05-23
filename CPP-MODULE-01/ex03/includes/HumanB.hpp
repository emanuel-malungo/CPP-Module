/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emalungo <emalungo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 12:10:06 by emalungo          #+#    #+#             */
/*   Updated: 2025/05/16 12:30:37 by emalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "./Weapon.hpp"
# include <iostream>

class HumanB 
{
  private:
	std::string name;
	Weapon *weapon;

  public:
	HumanB(std::string name);
	~HumanB();

	void attack(void) const;
    std::string getName(void) const;
    void setName(std::string name);
	void setWeapon(Weapon &weapon);
};

#endif