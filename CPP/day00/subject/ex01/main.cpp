/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 14:30:38 by ozharko           #+#    #+#             */
/*   Updated: 2018/06/18 14:30:43 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pb.h"
#include <iostream>
#include <string>
#include <iomanip>

void				prompt_add(Contact *tab)
{
	int				i;

	i = 0;
	if (tab[7].set == 1)
	{
		std::cout << "PhoneBook is full" << std::endl;
		return ;
	}
	for (i = 0; tab[i].set == 1; i++);
	tab[i].set = 1;
	tab[i].add_contact();
}

void	prompt_search(Contact *tab)
{
	std::string		number;
	int				index;

	std::cout << "     Index|First Name| Last Name| Nick Name" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		tab[i].showbrief();
	}
	// std::cout << "Enter an index: ";
	// std::getline (std::cin, number);
	// if (number.size() == 1 && number[0] > 48 && number[0] < 57)
	// {
	// 		index = number[0] - 49;
	// 		tab[index].showfull();
	// }
	// else
	// 	std::cout << "Error: Please Enter a valid Index." << std::endl;
}

/*
void	cheakwidth(std::string str)
{
	std::string	tmp;

	tmp = str;
	if (tmp.size() > 10)
	{
		tmp = tmp.substr(0, 9) + ".";
	}
	std::cout << tmp;
}
*/

/*
void				prompt_search(Contact *tab)
{
	int				i;

	std::cout << "     Index|First Name| Last Name| Nick Name" << std::endl;
	i = 0;
	while (tab[i].set == 1)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << tab[i].firstname << "|";
		std::cout << std::setw(10) << tab[i].lastname << "|";
		std::cout << std::setw(10) << tab[i].nickname << std::endl;
		i++;
	}


}
*/

int					main(void)
{
	Contact			tab[8];
	std::string		line;

	std::cout << "PhoneBook 3000" << std::endl << "Available command: ADD, SEARCH and EXIT" << std::endl << "Enter a command: ";
	std::getline(std::cin, line);
	while (line != "EXIT")
	{
		if (line == "ADD")
			prompt_add(tab);
		else if (line == "SEARCH")
			prompt_search(tab);
		else
			std::cout << std::endl << "Error: Please Enter available command." << std::endl;
		std::cout << "Available command: ";
		if (tab[7].set != 1)
			std::cout << "ADD, ";
		std::cout << "SEARCH and EXIT" << std::endl << "Enter a command: ";
		std::getline(std::cin, line);
        std::cout << "LOADING..." << std::endl;
	}
}