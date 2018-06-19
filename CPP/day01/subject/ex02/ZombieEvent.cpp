/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 15:18:02 by ozharko           #+#    #+#             */
/*   Updated: 2018/06/19 15:18:04 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() 
{

}

ZombieEvent::~ZombieEvent()
{

}

void	ZombieEvent::setZombieType(std::string str)
{
	_type = str;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	_name = name;
	Zombie* boo = new Zombie(_type, _name);
	boo->announce();
	return (boo);
}