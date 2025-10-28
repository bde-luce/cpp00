/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 00:06:07 by bde-luce          #+#    #+#             */
/*   Updated: 2025/10/26 00:12:24 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"
#include "../inc/Contact.hpp"
#include "../inc/utils.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

PhoneBook :: PhoneBook()
{
}
	
PhoneBook :: ~PhoneBook()
{
}

void	PhoneBook :: add_contact(Contact &contact)
{
	for (int i = 7; i > 0; i--)
		m_contact[i] = m_contact[i - 1];
	m_contact[0] = contact;
}

void	PhoneBook :: add()
{
	Contact	contact;

	contact.create_from_input();
	add_contact(contact);
}

void	PhoneBook :: display_contact_info() const
{
	std :: cout << "Insert a contact index to view details >> ";
	std :: string index;
	std :: getline(std :: cin >> std :: ws, index);
	int j;
	j = std :: atoi(index.c_str());
	if (index.length() > 1 || j < 1 || j > 8)
		std :: cout << "\n* The Index inserted is invalid *\n\n";
	else
		m_contact[j - 1].display_contact_info_details();
}

void	PhoneBook :: search() const
{	
	print_phonebook_header();
	for (int i = 0; i < 8; i++)
		m_contact[i].display_contact_list(i);
	display_contact_info();
}
