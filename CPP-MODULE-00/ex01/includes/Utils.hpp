/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emalungo <emalungo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 15:50:07 by emalungo          #+#    #+#             */
/*   Updated: 2025/05/10 18:58:48 by emalungo         ###   ########.fr       */
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
int		getUserInput(std::string input, int indexIput, std::string prompt, int mod);

#endif