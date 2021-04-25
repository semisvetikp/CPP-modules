/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jradioac <jradioac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 20:02:27 by jradioac          #+#    #+#             */
/*   Updated: 2021/04/25 03:27:30 by jradioac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <iomanip>
# include <string>
# include "contact.hpp"

class Phonebook
{
public:
	static const int size = 8;
	int i;
	Contact contacts[size];
};

void handling_contact(Phonebook &book);
void search_contact(Phonebook &book);
void print_contactdata(Phonebook &book, int number);

#endif