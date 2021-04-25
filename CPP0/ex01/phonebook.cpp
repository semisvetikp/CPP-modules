/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jradioac <jradioac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 13:30:21 by jradioac          #+#    #+#             */
/*   Updated: 2021/04/25 03:32:18 by jradioac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"


void print_contacts(Phonebook &book)
{
	int k;

	k = 0;
	while (k < book.i + 1)
	{
		std :: cout << "№:  " << book.contacts[k].m_id << " |   ";
		std :: cout << "First name: " << book.contacts[k].m_first_name << "   |   ";
		std :: cout << "Last name: "<< book.contacts[k].m_last_name << "\n";
		k++;
	}
	std :: cout << "\n";
	return ;
}


void rewrite_contact(Phonebook &book, int number)
{
	std :: cout << "Please enter your first name\n";
	std :: cin >> book.contacts[number].m_first_name;
	std :: cout << "Please enter your last name\n";
	std :: cin >> book.contacts[number].m_last_name;
	std :: cout << "Please enter your email address\n";
	std :: cin >> book.contacts[number].m_email;
	std :: cout << "Please enter your number\n";
	std :: cin >> book.contacts[book.i].m_number;
	std :: cout << "Please enter the day of your birth\n";
	std :: cin >> book.contacts[number].m_dayb;
	std :: cout << "Please enter the month of your birth\n";
	std :: cin >> book.contacts[number].m_monthb;
	std :: cout << "Please enter the year of your birth\n";
	std :: cin >> book.contacts[number].m_yearb;
	std :: cout << "Contact created\n";
	return ;
}

void delete_rewrite(Phonebook &book)
{
	std :: string answer;
	int number;

	std :: cout <<	"The contact book is full. Do you want to overwrite one of existing contacts? (y/n) \n";
	std :: cin >> answer;
	if (answer == "n")
		return ;
	else if (answer == "y")
	{
		print_contacts(book);
		std :: cout <<	"Please enter number of contacts\n";
		std :: cin >> number;
		rewrite_contact(book, number - 1);
		return ;
	}
	else
	{
		std :: cout <<	"Try again\n";
		delete_rewrite(book);
	}
}

void handling_contact(Phonebook &book)
{
	book.i++;
	if (book.i > book.size - 1)
		delete_rewrite(book);
	else
	{
		book.contacts[book.i].m_id = book.i;
		std :: cout << "Please enter your first name\n";
		std :: cin >> book.contacts[book.i].m_first_name;
		std :: cout << "Please enter your last name\n";
		std :: cin >> book.contacts[book.i].m_last_name;
		std :: cout << "Please enter your number\n";
		std :: cin >> book.contacts[book.i].m_number;
		std :: cout << "Please enter your email address\n";
		std :: cin >> book.contacts[book.i].m_email;
		std :: cout << "Please enter the day of your birth\n";
		std :: cin >> book.contacts[book.i].m_dayb;
		std :: cout << "Please enter the month of your birth\n";
		std :: cin >> book.contacts[book.i].m_monthb;
		std :: cout << "Please enter the year of your birth\n";
		std :: cin >> book.contacts[book.i].m_yearb;
		std :: cout << "Contact created\n";
	}
	return ;
	// std :: cout << name.m_last_name << '\n';
}


void search_contact(Phonebook &book)
{
	int number;
	print_contacts(book);
	std :: cout << "Please select a contact number to show full information\n";
	std :: cin >> number;
	if (number >= 0 && number <= book.i)
		print_contactdata(book, number);
	else
	{
		std :: cout << "Please try again\n";
		search_contact(book);
	}
	return ;
}

