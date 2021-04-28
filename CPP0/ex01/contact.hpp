/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jradioac <jradioac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 01:57:27 by jradioac          #+#    #+#             */
/*   Updated: 2021/04/27 02:19:10 by jradioac         ###   ########.fr       */
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
private:
    std::string m_first_name;
	std::string m_last_name;
	std::string m_nickname;
    std::string m_login;
	std::string m_postal_address;
	std::string m_email;
    int m_number;
	int m_dayb;
	int m_monthb;
	int m_yearb;
	std::string m_favorite_meal;
	std::string m_underwear_color;
	std::string m_darkest_secret;
	int m_id;

public:
	void print_contactdata();

	void setfname(std::string fname) { m_first_name = fname; }
	std::string getfname() { return m_first_name; }

	void setlname(std::string lname) { m_last_name = lname; }
	std::string getlname() { return m_last_name; }

	void setnname(std::string nname) { m_nickname = nname; }
	std::string getnname() { return m_nickname; }

	void setlogin(std::string login) { m_login = login; }
	std::string getlogin() { return m_login; }

	void setpost(std::string post) { m_postal_address = post; }
	std::string getpost() { return m_postal_address; }

	void setemail(std::string email) { m_email = email; }
	std::string getemail() { return m_email; }

	void setnumber(int number) { m_number = number; }
	int getnumber() { return m_number; }

	void setdayb(int dayb) { m_dayb = dayb; }
	int getdayb() { return m_dayb; }

	void setmonthb(int monthb) { m_monthb = monthb; }
	int getmonthb() { return m_monthb; }

	void setyearb(int yearb) { m_yearb = yearb; }
	int getyearb() { return m_yearb; }

	void setid(int id) { m_id = id; }
	int getid() { return m_id; }

	void setmeal(std::string meal) { m_favorite_meal = meal; }
	std::string getmeal() { return m_favorite_meal; }

	void setcolor(std::string color) { m_underwear_color = color; }
	std::string getcolor() { return m_underwear_color; }

	void setsecret(std::string secret) {m_darkest_secret = secret; }
	std::string getsecret() { return m_darkest_secret; }
};

#endif
