/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 00:06:48 by bde-luce          #+#    #+#             */
/*   Updated: 2025/10/29 13:34:58 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	Contact m_contact[8];

	public:

	PhoneBook();
	~PhoneBook();

	void	add();
	void	add_contact(Contact &contact);
	void	search() const;
	void	display_contact_info() const;
};

#endif
