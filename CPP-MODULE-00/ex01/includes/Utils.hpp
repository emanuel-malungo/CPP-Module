/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emalungo <emalungo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 15:50:07 by emalungo          #+#    #+#             */
/*   Updated: 2025/05/11 09:27:22 by emalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

# include "./ErrorHandling.hpp"
# include <cstdlib>
# include <iomanip>
# include <iostream>
# include <string>

void	displayHeader(void);
std::string    printTableCell(std::string str);
bool getUserInput(int &indexInput, const std::string &prompt, int currentIndex);
bool getUserInput(std::string &input, const std::string &prompt, int validationType);

#endif