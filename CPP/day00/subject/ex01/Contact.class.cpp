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
	std::cout << "Enter firstname: ";
	std::getline (std::cin, firstname);
	std::cout << "Enter lastname: ";
	std::getline (std::cin, lastname);
	std::cout << "Enter nickname: ";
	std::getline (std::cin, nickname);
	std::cout << "Enter login: ";
	std::getline (std::cin, login);
	std::cout << "Enter postal address: ";
	std::getline (std::cin, address);
	std::cout << "Enter email: ";
	std::getline (std::cin, email);
	std::cout << "Enter phone number: ";
	std::getline (std::cin, phone);
	std::cout << "Enter birthday: ";
	std::getline (std::cin, birthday);
	std::cout << "Enter favorite meal: ";
	std::getline (std::cin, meal);
	std::cout << "Enter underwear color: ";
	std::getline (std::cin, underwear);
	std::cout << "Enter darkest secret: ";
	std::getline (std::cin, secret);
}


void	Contact::showtruncate(std::string str)
{
	char	buffer[11];

	if (str.size() > 10)
	{
		str.copy(buffer, 9, 0);
		buffer[9]='.';
		buffer[10]='\0';
		std::cout << buffer;
	}
	else
		std::cout << str;
}

void	Contact::showbrief(void)
{
	showtruncate(firstname);
	std::cout << "|";
	showtruncate(lastname);
	std::cout << "|";
	showtruncate(nickname);
	std::cout << std::endl;
}