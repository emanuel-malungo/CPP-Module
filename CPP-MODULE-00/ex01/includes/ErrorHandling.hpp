/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ErrorHandling.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emalungo <emalungo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 14:48:42 by emalungo          #+#    #+#             */
/*   Updated: 2025/05/10 18:12:21 by emalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HANDLING_HPP
# define HANDLING_HPP

# include <cctype>
# include <iostream>
# include <ostream>
# include <string>

int	checkName(std::string name);
int	checkPhoneNumber(std::string phoneNumber);
int	checkDarckestSecret(std::string darkestSecret);
int checkIndexInput(int indexInput);

#endif