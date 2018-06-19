/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 17:00:45 by ozharko           #+#    #+#             */
/*   Updated: 2018/06/19 17:00:48 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	std::string		tab[] = {"RED", "GREEN", "YELLOW", "BLACK", "WHITE"};
	horde = new Zombie[n];

	number = n;
	for (int i = 0; i < number; i++)
		horde[i].name = tab[time(NULL) % 5];
	int	i = 0;
	while (i++ < n)
		horde->announce();
}

ZombieHorde::~ZombieHorde(void)
{
	delete [] horde;
}

