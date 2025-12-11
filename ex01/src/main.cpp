/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 23:15:42 by bde-luce          #+#    #+#             */
/*   Updated: 2025/10/31 12:17:34 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	PhoneBook	phonebook;
	
	std::cout << "+----------------------------------------------------------------+\n";
	std::cout << "|                Welcome to My Awesome PhoneBook!                |\n";
	std::cout << "+----------------------------------------------------------------+\n";
	
	while (true)
	{
		std :: cout << "Enter one of the following commands: ADD, SEARCH or EXIT >> ";
		std :: string	command;
		if (!std :: getline(std :: cin >> std :: ws, command))
		{
			std :: cout << "\nEOF detected! Leaving program..\n";	
			break;
		}
		else if (command == "ADD")
			phonebook.add();
		else if (command == "SEARCH")
			phonebook.search();
		else if (command == "EXIT")
			return (0);
		else
			std :: cout << "\n* Invalid command entered *\n\n";
	}
	return (0);
}
