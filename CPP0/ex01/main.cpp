/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jradioac <jradioac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 01:56:40 by jradioac          #+#    #+#             */
/*   Updated: 2021/04/28 00:04:13 by jradioac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"


void print_instruction()
{
	std::cout  << std::left << std::setfill('-') << std::setw(75) << " " << "\n";
	std::cout << std::left << std::setfill(' ')
		 << std::setw(77) << "| Please enter the ADD command (to input a new contact’s information)," << "|\n"
		 << std::setw(75) << "| the SEARCH command (display a list of the available non-empty contacts)" << "|\n"
		 << std::setw(75) << "| or the EXIT command (program quits)" << "|\n";
	std::cout  << std::left << std::setfill('-') << std::setw(75) << " " << "\n";
	return;
}

int main(void)
{
	Phonebook book;
	std :: string s1;

	print_instruction();
	while(!std::cin.eof())
	{
		std :: cout << "Enter ADD, SEARCH or EXIT\n";
		getline(std::cin, s1);
		if  (s1 == "ADD")
			book.handling_contact();
		else if (s1 == "SEARCH")
			book.search_contact();
		else if ((s1 == "EXIT"))
		{
			std :: cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
			std :: cout << std::right << std::setfill(' ') << std::setw(23) << "*Bye-Bye*\n";
			std :: cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
			exit(1);
		}
		else 
		{
			std :: cout << "Undefined command" << '\n';
		}
	}
	return(0);
}
