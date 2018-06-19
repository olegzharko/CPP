/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 15:54:19 by ozharko           #+#    #+#             */
/*   Updated: 2018/06/18 15:54:21 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pb.h"

Contact::Contact(): set(0) {} // как установить set на 0;

Contact::~Contact() {}

void		Contact::add_contact(void)
{
	std::cout << "  *Firstname:.......";
	std::getline (std::cin, firstname);
	std::cout << "  *Lastname:........";
	std::getline (std::cin, lastname);
	std::cout << "  *Nickname:........";
	std::getline (std::cin, nickname);
	std::cout << "  *Login:...........";
	std::getline (std::cin, login);
	std::cout << "  *Postal address:..";
	std::getline (std::cin, address);
	std::cout << "  *Email:...........";
	std::getline (std::cin, email);
	std::cout << "  *Phone number:....";
	std::getline (std::cin, phone);
	std::cout << "  *Birthday:........";
	std::getline (std::cin, birthday);
	std::cout << "  *Favorite meal:...";
	std::getline (std::cin, meal);
	std::cout << "  *Underwear color:.";
	std::getline (std::cin, underwear);
	std::cout << "  *Darkest secret:..";
	std::getline (std::cin, secret);
}

void	Contact::allinfo(void)
{
	if (set == 0)
		std::cout << "\"ERROR: The cell is empty.\"" << std::endl;
	else
	{
		std::cout << "ALL INFO:           " << std::endl;
		std::cout << "  *Firstname:......." << firstname << std::endl;
		std::cout << "  *Lastname:........" << lastname << std::endl;
		std::cout << "  *Nickname:........" << nickname << std::endl;
		std::cout << "  *Login:..........." << login << std::endl;
		std::cout << "  *Postal Address:.." << address << std::endl;
		std::cout << "  *Email:..........." << email << std::endl;
		std::cout << "  *Phone Number:...." << phone << std::endl;
		std::cout << "  *Birthday:........" << birthday << std::endl;
		std::cout << "  *Favorite Meal:..." << meal << std::endl;
		std::cout << "  *Underwear Color:." << underwear << std::endl;
		std::cout << "  *Darkest Secret:.." << secret << std::endl;
	}
}

void	Contact::normalsize(std::string str)
{
	char	tmp[11];
		
	std::cout << std::setfill (' ') << std::setw (10);
	if (str.size() > 10)
	{
		str.copy(tmp, 9, 0);
		tmp[9]='.';
		tmp[10]='\0';
		std::cout << std::setw (10) << tmp;
	}
	else
		std::cout << str;
}

void	Contact::preview(void)
{
	normalsize(firstname);
	std::cout << "|";
	normalsize(lastname);
	std::cout << "|";
	normalsize(nickname);
	std::cout << std::endl;
}