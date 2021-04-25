/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jradioac <jradioac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 01:57:59 by jradioac          #+#    #+#             */
/*   Updated: 2021/04/25 03:27:40 by jradioac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
# include "phonebook.hpp"

// void print_contactdata(Contact &name)
// {
// 	std :: cout << "First name: " << name.m_first_name << "\n";
// 	std :: cout << "Last name: "<< name.m_last_name << "\n";
// 	std :: cout << "Email: "<< name.m_email << "\n";

// 	std :: cout << "Birthday: " << name.m_dayb << "/" << 
// 							name.m_monthb << "/" << 
// 							name.m_yearb << "/" << "\n";
// 	return ;
// }


void print_contactdata(Phonebook &book, int number)
{
	std :: cout << "First name: " << book.contacts[number].m_first_name << "\n";
	std :: cout << "Last name: "<< book.contacts[number].m_last_name << "\n";
	std :: cout << "Email: "<< book.contacts[number].m_email << "\n";

	std :: cout << "Birthday: " << book.contacts[number].m_dayb << "/" << 
							book.contacts[number].m_monthb << "/" << 
							book.contacts[number].m_yearb << "/" << "\n";
	return ;
}


// void print_contacts(void)
// {

// }

// void search_contact(void)
// {
	
	
// 	// std :: cout << "SEARCH" << '\n';
// }
