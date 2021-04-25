/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jradioac <jradioac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 01:57:27 by jradioac          #+#    #+#             */
/*   Updated: 2021/04/25 03:27:37 by jradioac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <iomanip>
# include <string>
// # include "phonebook.hpp"

class Contact
{
public:
    std::string m_first_name;
	std::string m_last_name;
    std::string m_email;
    int m_number;
	int m_dayb;
	int m_monthb;
	int m_yearb;
	int m_id;

};

// void print_contactdata(Phonebook &book, int number);

#endif
