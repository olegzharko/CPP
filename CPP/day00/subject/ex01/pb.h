/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 14:31:46 by ozharko           #+#    #+#             */
/*   Updated: 2018/06/18 14:31:48 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PB_H
# define PB_H

#include <iostream>

class Contact
{
public:
	Contact();
	~Contact();

	void		add_contact(void);
	void		showbrief(void); // original
	// void	showfull(void);
	void		showtruncate(std::string str); // orighinal

	int				set;
	std::string		firstname;
	std::string		lastname;
	std::string		nickname;
	std::string		login;
	std::string		address;
	std::string		email;
	std::string		phone;
	std::string		birthday;
	std::string		meal;
	std::string		underwear;
	std::string		secret;
};

#endif