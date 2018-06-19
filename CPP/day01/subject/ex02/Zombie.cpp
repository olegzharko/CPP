/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 15:17:05 by ozharko           #+#    #+#             */
/*   Updated: 2018/06/19 15:17:11 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string type, std::string name) : _type(type), _name(name)
{
}

Zombie::~Zombie()
{
	std::cout << _name << " is dead" << std::endl;
}

std::string	Zombie::getName(void)
{
	return this->_name;
}

std::string	Zombie::getType(void)
{
	return _type;
}


void	Zombie::announce(void)
{
	std::cout << getName() << " " << getType() << " Braiiiiiiinnnssss" << std::endl;
}