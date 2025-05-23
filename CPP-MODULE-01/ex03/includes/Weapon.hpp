/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emalungo <emalungo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 09:45:02 by emalungo          #+#    #+#             */
/*   Updated: 2025/05/16 12:35:12 by emalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
  private:
	std::string type;

  public:
	Weapon(std::string type);
	~Weapon();
	const std::string &getType(void) const;
	void setType(std::string type);
};

#endif