/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emalungo <emalungo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 13:37:31 by emalungo          #+#    #+#             */
/*   Updated: 2025/05/23 19:31:58 by emalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./FileReplacer.hpp"

FileReplacer::FileReplacer()
{
	buffer = "";
	fileName = "";
	strReplace = "";
	strReplacement = "";
}

FileReplacer::~FileReplacer()
{
}

std::string FileReplacer::getFileName(void) const
{
	return (fileName);
}

std::string FileReplacer::getStrReplace(void) const
{
	return (strReplace);
}

std::string FileReplacer::getReplacement(void) const
{
	return (strReplacement);
}

std::string FileReplacer::getBuffer(void) const
{
	return (buffer);
}


void FileReplacer::setFileName(std::string fileName)
{
	this->fileName = fileName;
}

void FileReplacer::setStrReplace(std::string strReplace)
{
	this->strReplace = strReplace;
}

void FileReplacer::setStrReplacement(std::string strReplacement)
{
	this->strReplacement = strReplacement;
}

void FileReplacer::setBuffer(std::string buffer)
{
	this->buffer = buffer;
}


int FileReplacer::getFileContent(void)
{
	std::string line;
	std::ifstream inputFile(fileName.c_str());
	if (!inputFile.is_open())
	{
		std::cerr << "Error:\ncould not open the file.";
		std::cerr << std::endl;
		inputFile.close();
		return (0);
	}
	while (std::getline(inputFile, line))
		buffer += line + '\n';
	return (1);
}

int FileReplacer::startFileReplacer(void)
{
	size_t	pos;

	pos = 0;
	while ((pos = buffer.find(strReplace, pos)) != std::string::npos)
	{
		buffer.erase(pos, strReplace.length());
		buffer.insert(pos, strReplacement);
	}
	std::string newNameFile = fileName + ".replace";
	std::ofstream outFile(newNameFile.c_str());
	if (!outFile.is_open())
	{
		std::cerr << "Error\ncreating output file." << std::endl;
		return (0);
	}
	outFile << buffer;
	outFile.close();
	return (1);
}
