/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emalungo <emalungo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:14:05 by emalungo          #+#    #+#             */
/*   Updated: 2025/05/07 16:49:04 by emalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# define MAX_CONTACTS 8

# include "Contact.hpp"
# include <iostream>
# include <string>

class PhoneBook
{
  private:
	int indexCorrent;
	Contact contacts[MAX_CONTACTS];

  public:
	PhoneBook();
	~PhoneBook();

	void addContact(void);
	void searchContact(void);
	void displayHeader(void);
	void displayContact(int index);
	void displayAllContacts();

	int check_name(std::string name);
};

#endif