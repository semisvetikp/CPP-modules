/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jradioac <jradioac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 01:57:59 by jradioac          #+#    #+#             */
/*   Updated: 2021/04/27 00:32:24 by jradioac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"


void Contact :: print_contactdata()
{
	std :: cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	std :: cout << "First name: " << m_first_name << "\n";
	std :: cout << "Last name: "<< m_last_name << "\n";
	std :: cout << "Nickname: "<< m_nickname << "\n";
	std :: cout << "Postal adress: "<< m_postal_address << "\n";
	std :: cout << "Email: "<< m_email << "\n";
	std :: cout << "Phonenumber: "<< m_number << "\n";
	std :: cout << "Birthday: " << m_dayb << "/" << 
							m_monthb << "/" << 
							m_yearb << "\n";
	std :: cout << "Favorite meal: " << m_favorite_meal << "\n";
	std :: cout << "Underwear color: " << m_underwear_color << "\n";
	std :: cout << "Darkest secret: " << m_darkest_secret << "\n";
	std :: cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	return ;
}
