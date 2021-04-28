/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jradioac <jradioac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 01:57:59 by jradioac          #+#    #+#             */
/*   Updated: 2021/04/28 00:12:42 by jradioac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"


std::string cut(std::string str)
{
	std::string line;
	int len;

	len = str.length();
	if (len > 10)
	{
		line = str.substr(0,8);
		line += ".";
		return(line);
	}
	return(str);
}

void Phonebook::print_contacts()
{
	int k;

	k = 0;
	std :: cout << std::right << std::setfill(' ') << 
	std::setw(13) << "№|" <<
	std::setw(10) << "First name|" <<
	std::setw(11) << "Last name|" <<
	std::setw(11) << "Nickname|" <<"\n";
	std :: cout <<"          ----------------------------------\n";
	while (k < i + 1)
	{
		std :: cout << std::right << std::setw(10) << contacts[k].getid() << "|" << 
		std::setw(10) <<  cut(contacts[k].getfname()) << "|" << 
		std::setw(10) << cut(contacts[k].getlname()) << "|" << 
		std::setw(10) << cut(contacts[k].getnname()) << "|" << "\n";
		k++;
	}
	std :: cout << "\n";
	return ;
}


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
