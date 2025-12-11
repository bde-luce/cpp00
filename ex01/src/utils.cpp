/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 13:44:58 by bde-luce          #+#    #+#             */
/*   Updated: 2025/10/31 12:22:27 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>

std :: string	get_input(std :: string contact_field)
{
	std :: cout << contact_field;
	std :: string input;
	if (!std :: getline(std :: cin >> std :: ws, input))
	{
		std :: cout << "\nEOF detected! Leaving program..\n";	
		exit(0);
	}
	
	return (input);
}

void	print_10(std :: string s)
{
	if (s.length() >= 10)
		s = s.substr(0, 9) + '.';
	std :: cout << "|" << std :: setw(10) << s;
}

void	print_phonebook_header()
{
	std :: cout << "\n" << std :: setw(10) << "Index";
	std :: cout << "|" << std :: setw(10) << "First Name";
	std :: cout <<  "|" << std :: setw(10) << "Last Name";
	std :: cout <<  "|" << std :: setw(10) << "Nickname\n";
	std :: cout << "-------------------------------------------\n";
}
