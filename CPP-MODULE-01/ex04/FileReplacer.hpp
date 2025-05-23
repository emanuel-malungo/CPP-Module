/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emalungo <emalungo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 13:27:07 by emalungo          #+#    #+#             */
/*   Updated: 2025/05/19 11:28:58 by emalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEREPLACER_HPP
# define FILEREPLACER_HPP

# include <fstream>
# include <iostream>
# include <string>

class FileReplacer
{
  private:
	std::string fileName;
	std::string strReplace;
	std::string strReplacement;
	std::string buffer;

  public:
	FileReplacer();
	~FileReplacer();

	std::string getFileName(void) const;
	std::string getStrReplace(void) const;
	std::string getReplacement(void) const;
	std::string getBuffer(void) const;

	void setFileName(std::string fileName);
	void setStrReplace(std::string strReplace);
	void setStrReplacement(std::string strReplacement);
	void setBuffer(std::string buffer);

	int getFileContent(void);
	int startFileReplacer(void);
};

#endif