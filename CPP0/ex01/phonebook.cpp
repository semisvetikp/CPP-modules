/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jradioac <jradioac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 13:30:21 by jradioac          #+#    #+#             */
/*   Updated: 2021/04/28 00:45:53 by jradioac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"


int only_digit(std:: string line)
{
	int i;

	i = 0;
	if (line.empty() || !line.size())
		return(1);
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
		getline(std::cin, line);
		if (line.empty() || !line.size())
			return(0);
		else if ((only_digit(line) == 0))
			return(std::stoi(line));
		else if (std::cin.eof())
			exit(1);
		else 
			std :: cout << "Oops, that input is invalid.  Please try again.\n";
	}
}

std::string read(std::string line)
{
	std::string str;

	std :: cout << "Please enter your " << line << std :: endl;
	getline(std::cin, str);
	return (str);

}

void Phonebook::rewrite_contact(int number)
{
	if (number > size - 1 || number < 0)
	{
		std :: cout << "Oops, some wrong\n";
		return;
	}
	std :: cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
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
	std :: cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	return ;
}

void Phonebook::delete_rewrite()
{
	std :: string answer;
	std :: string number;

	std :: cout <<	"The contact book is full. Do you want to overwrite one of existing contacts? (y/n) \n";
	getline(std::cin, answer);
	if (answer == "n")
		return ;
	else if (answer == "y")
	{
		print_contacts();
		std :: cout <<	"Please enter number of contacts (0-7)\n";
		rewrite_contact(getValue());
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
	if (i >= size - 1)
		delete_rewrite();
	else
	{
		i++;
		contacts[i].setid(i);
		rewrite_contact(i);
		std :: cout << "Contact created\n";
		std :: cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	}
	return ;
}


void Phonebook::search_contact()
{
	std::string number;
	int num;
	
	print_contacts();
	std :: cout << "Please select a contact number to show full information or any character for return to menu\n";
	getline(std::cin, number);
	if (!(only_digit(number)))
	{
		num = std::stoi(number);
		if (num >= 0 && num <= i)
			contacts[num].print_contactdata();
	}
	else
		return;
	return ;
}
