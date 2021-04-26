/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jradioac <jradioac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 20:02:27 by jradioac          #+#    #+#             */
/*   Updated: 2021/04/27 01:28:38 by jradioac         ###   ########.fr       */
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
	static const int size = 8;
	int i;
	Contact contacts[size];

public:
	Phonebook(){
		i = -1;
	}
	void handling_contact();
	void search_contact();
	void delete_rewrite();
	void print_contacts();
	void rewrite_contact(int number);

};

void print_instruction();
void print_contactdata(Phonebook &book, int number);

#endif