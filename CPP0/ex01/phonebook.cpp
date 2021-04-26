/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jradioac <jradioac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 13:30:21 by jradioac          #+#    #+#             */
/*   Updated: 2021/04/27 02:41:05 by jradioac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"


int only_digit(std:: string line)
{
	int i;

	i = 0;
	while (line[i] != '\0')
	{
		if (std::isdigit(line[i]) == 0) 
			return(1);
		i++;
	}
	return (0);
}


int getValue()
{
	while (true)
	{
		std :: string line;
		std :: cin >> line;
		if ((only_digit(line) == 1))
			std :: cout << "Oops, that input is invalid.  Please try again.\n";
		else 
			return(std::stoi(line));
	}
}

void Phonebook::print_contacts()
{
	int k;

	k = 0;
	while (k < i + 1)
	{
		std :: cout << "№:  " << contacts[k].getid() << " |   ";
		std :: cout << "First name: " << contacts[k].getfname() << "   |   ";
		std :: cout << "Last name: "<< contacts[k].getlname() << "   |   ";
		std :: cout << "Nickname: "<< contacts[k].getnname() << "\n";
		k++;
	}
	std :: cout << "\n";
	return ;
}

std::string read(std::string line)
{
	std::string str;

	std :: cout << "Please enter your " << line << ":\n";
	std :: cin >> str;
	return (str);

}

void Phonebook::rewrite_contact(int number)
{
	contacts[number].setfname(read("first name"));
	contacts[number].setlname(read("last name"));
	contacts[number].setnname(read("nickname"));
	contacts[number].setlogin(read("login"));
	contacts[number].setpost(read("postal address"));
	contacts[number].setemail(read("email"));
	std :: cout << "Please enter your number\n";
	contacts[number].setnumber(getValue());
	std :: cout << "Please enter the day of your birth\n";
	contacts[number].setdayb(getValue());
	std :: cout << "Please enter the month of your birth\n";
	contacts[number].setmonthb(getValue());
	std :: cout << "Please enter the year of your birth\n";
	contacts[number].setyearb(getValue());
	contacts[number].setmeal(read("favorite meal"));
	contacts[number].setcolor(read("underwear color"));
	contacts[number].setsecret(read("darkest secret"));	
	return ;
}

void Phonebook::delete_rewrite()
{
	std :: string answer;
	int number;

	std :: cout <<	"The contact book is full. Do you want to overwrite one of existing contacts? (y/n) \n";
	std :: cin >> answer;
	if (answer == "n")
		return ;
	else if (answer == "y")
	{
		print_contacts();
		std :: cout <<	"Please enter number of contacts\n";
		std :: cin >> number;
		rewrite_contact(number - 1);
		return ;
	}
	else
	{
		std :: cout <<	"Try again\n";
		delete_rewrite();
	}
}

void Phonebook::handling_contact()
{
	i++;
	if (i > size - 1)
		delete_rewrite();
	else
	{
		contacts[i].setid(i);
		rewrite_contact(i);
		std :: cout << "Contact created\n";
	}
	return ;
}


void Phonebook::search_contact()
{
	int number;
	
	print_contacts();
	std :: cout << "Please select a contact number to show full information\n";
	std :: cin >> number;
	if (number >= 0 && number <= i)
		contacts[number].print_contactdata();
	else
	{
		std :: cout << "Please try again\n";
		search_contact();
	}
	return ;
}
