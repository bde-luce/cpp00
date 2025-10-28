/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 00:07:07 by bde-luce          #+#    #+#             */
/*   Updated: 2025/10/26 00:07:09 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
	std :: string	m_first_name;
	std :: string	m_last_name;
	std :: string	m_nickname;
	std :: string	m_phone_number;
	std :: string	m_darkest_secret;

	public:

	Contact();
	~Contact();

	void	create_from_input();
	void	display_contact_list(int i) const;
	void	display_contact_info_details() const;

};

#endif