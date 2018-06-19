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
	std::string		index;
	int 			i;
	
	std::cout << "     Index|First Name| Last Name| Nick Name" << std::endl;
	for (i = 0; tab[i].set == 1; i++)
	{
		std::cout << std::setfill (' ') << std::setw (10) << i + 1 << "|";
		tab[i].preview();
	}
	std::cout << "INDEX NUM: ";
	std::getline (std::cin, index);
	if (index[0] >= '1' && index[0] <= '8' && index[1] == '\0')
	{
		tab[index[0] - '1'].allinfo();
	}
	else
		std::cout << "\"ERROR: Invalid cell.\"" << std::endl;
}

int					main(void)
{
	Contact			tab[8];
	std::string		line;

	std::cout << "PHONEBOOK 3000" << std::endl << "Available command: ADD, SEARCH and EXIT" << std::endl << "COMMAND: ";
	std::getline(std::cin, line);
	while (line != "EXIT")
	{
		if (line == "ADD")
			prompt_add(tab);
		else if (line == "SEARCH")
			prompt_search(tab);
		else
			std::cout << "ERROR: Invalid command." << std::endl;
		std::cout << "Available command: ";
		if (tab[7].set != 1)
			std::cout << "ADD, ";
		std::cout << "SEARCH and EXIT" << std::endl << "COMMAND: ";
		std::getline(std::cin, line);
	}
	return 0;
}