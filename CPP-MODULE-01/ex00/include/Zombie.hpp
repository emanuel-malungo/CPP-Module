/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emalungo <emalungo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 13:05:54 by emalungo          #+#    #+#             */
/*   Updated: 2025/05/23 23:25:29 by emalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <ostream>
# include <string>

class Zombie
{
  private:
    std::string name;
    
  public:
    Zombie(std::string name);
    ~Zombie();
    void announce(void);
    
    void setName(std::string name);
    std::string getName(void);
};

void randomChump( std::string name);
Zombie* newZombie( std::string name);

#endif