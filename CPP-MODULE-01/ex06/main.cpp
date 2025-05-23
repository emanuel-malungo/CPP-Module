/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emalungo <emalungo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 11:32:38 by emalungo          #+#    #+#             */
/*   Updated: 2025/05/23 19:30:54 by emalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Harl.hpp"

int main(int argc, char **argv)
{
    Harl harl;

    if (argc != 2)
        std::cerr << "Error: invalid input" << std::endl;
    if (std::string(argv[1]).empty())
    {
        std::cerr << "Error\nInvalid character" << std::endl;
        return (1);
    }
    harl.complain(argv[1]);
    return 0;
}
