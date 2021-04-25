/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jradioac <jradioac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 01:56:40 by jradioac          #+#    #+#             */
/*   Updated: 2021/04/25 03:28:35 by jradioac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

int main(void)
{
	Phonebook book;
	Contact name;
	std :: string s1;
	book.i = -1;
	
	while(1)
	{
		std :: cin >> s1;
		if  (s1 == "ADD")
			handling_contact(book);
		else if (s1 == "SEARCH")
			search_contact(book);
		else if ((s1 == "EXIT"))
			exit(1);
		else 
			std :: cout << "Undefined command" << '\n';
	}
	return(0);
}
