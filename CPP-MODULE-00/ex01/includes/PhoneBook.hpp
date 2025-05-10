/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emalungo <emalungo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:14:05 by emalungo          #+#    #+#             */
/*   Updated: 2025/05/10 18:58:54 by emalungo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# define MAX_CONTACTS 8

# include "./Contact.hpp"
# include "./ErrorHandling.hpp"
# include "./Utils.hpp"
# include <cstdlib>
# include <iomanip>
# include <iostream>
# include <string>

class PhoneBook
{
  private:
	int correntIndex;
	int oldestIndex;
	Contact contacts[MAX_CONTACTS];

  public:
	PhoneBook();
	~PhoneBook();

	void addContact(void);
	void searchContact(void);
	void displayAllContacts(void);
	void displayContact(int index);
};

#endif