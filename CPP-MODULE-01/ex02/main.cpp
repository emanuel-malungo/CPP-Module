/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emalungo <emalungo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 09:12:50 by emalungo          #+#    #+#             */
/*   Updated: 2025/05/23 23:31:18 by emalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
    std::string str;
    std::string *strPtr;

    str = "HI THIS IS BRAIN";
    strPtr = &str;
    std::string &strRef = str;
    std::cout << "The memory address of the string variable: " << &str << std::endl;
    std::cout << "The memory address held by stringPTR: " << strPtr << std::endl;
    std::cout << "The memory address held by stringREF: " << &strRef;
    std::cout << std::endl;
    std::cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=";
    std::cout << std::endl;
    std::cout << "The value of the string variable: " << str << std::endl;
    std::cout << "The value pointed to by stringPTR: " << *strPtr << std::endl;
    std::cout << "The value pointed to by stringREF: " << strRef << std::endl;
	return (0);
}

