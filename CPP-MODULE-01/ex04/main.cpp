/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emalungo <emalungo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 13:05:53 by emalungo          #+#    #+#             */
/*   Updated: 2025/05/23 19:22:08 by emalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./FileReplacer.hpp"

int main(int argc, char **argv)
{
    FileReplacer fileReplacer;
    
    if (argc != 4)
    {
        std::cerr << "Error: invalid number of arguments." << std::endl;
        std::cerr << "Usage: ./replace <filename> <string_to_replace> <replacement_string>" ;
        std::cerr << std::endl;
        return (1);
    }
    if (std::string(argv[1]).empty() || std::string(argv[2]).empty() || std::string(argv[3]).empty())
    {
        std::cerr << "Error\nInvalid character" << std::endl;
        return (1);
    }
    fileReplacer.setFileName(argv[1]);
    fileReplacer.setStrReplace(argv[2]);
    fileReplacer.setStrReplacement(argv[3]);
    if (!fileReplacer.getFileContent())
        return (1);
    if (!fileReplacer.startFileReplacer())
        return (1);
    return (0);
}