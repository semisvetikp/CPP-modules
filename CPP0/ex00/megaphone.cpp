/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jradioac <jradioac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 00:27:07 by jradioac          #+#    #+#             */
/*   Updated: 2021/04/23 01:46:49 by jradioac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


char upper_case(char c)
{
	if (c >= 97 && c <= 122 )
		c = c - 32;
	return(c);
}

int main(int argc, char *argv[]) {
    
	int i;
	int j;

	i = 1;
	if (argc == 1)
		std :: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std :: endl;
	else
	{
		while ( i < argc)
		{
			j = 0;
			while(argv[i][j] != '\0')
			{
				upper_case(argv[i][j]);
				std :: cout << upper_case(argv[i][j]);;
				j++;
			}
			std :: cout << ' ';
			i++;
		}
		std :: cout << std :: endl;
	}
    return (0);
}