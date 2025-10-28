/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 00:05:56 by bde-luce          #+#    #+#             */
/*   Updated: 2025/10/26 00:11:17 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Contact.hpp"
#include "../inc/utils.hpp"
#include <iostream>
#include <iomanip>

Contact :: Contact()
{
}

Contact :: ~Contact()
{
}

void	Contact :: create_from_input()
{
	m_first_name = get_input("Insert first name: ");
	m_last_name = get_input("Insert last name: ");
	m_nickname = get_input("Insert nickname: ");
	m_phone_number = get_input("Insert phone number: ");
	m_darkest_secret = get_input("Insert darkest secret: ");
}

void	Contact :: display_contact_list(int i) const
{
	std :: cout << std :: setw(10) <<  i + 1;
	print_10(m_first_name);
	print_10(m_last_name);
	print_10(m_nickname);
	std :: cout << "\n";
}

void	Contact :: display_contact_info_details() const
{
	if (m_first_name == "")
		std :: cout << "\n* No contact stored at that index yet *\n\n";
	else
	{
		std :: cout << "\n" <<  "---------------- Contact Info ----------------\n";
		std :: cout << "First Name:" << m_first_name << "\n";
		std :: cout << "Last Name:" << m_last_name << "\n";
		std :: cout << "Nickname:" << m_nickname << "\n";
		std :: cout << "Phone Number:" << m_phone_number << "\n";
		std :: cout << "Darkest Secret:" << m_darkest_secret << "\n";
		std :: cout << "----------------------------------------------\n\n";
	}
}