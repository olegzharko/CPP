/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 13:54:34 by ozharko           #+#    #+#             */
/*   Updated: 2018/06/19 13:54:36 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(void) {

	std::cout << "Pony is buy!" << std::endl;
	return;
}

void	Pony::setPonyName(std::string str)
{
	this->_name = str;
	return ;
}

std::string		Pony::getPonyName(void)
{
	return (this->_name);
}

Pony::~Pony(void) {

	std::cout << "Pony is sold" << std::endl;
	return;
}

