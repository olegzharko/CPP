/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 15:18:24 by ozharko           #+#    #+#             */
/*   Updated: 2018/06/19 15:18:26 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

std::string	name(void)
{
	char	*tab[] = {
		(char *)"RED",
		(char *)"GREEN",
		(char *)"WHITE",
		(char *)"BLACK",
		(char *)"YELLOW",
	};
	int random;
	random = time(NULL) % 5;
	return((std::string) tab[random]);
}



int		main(void)
{
	Zombie monkey("walker", "Bob");
	monkey.announce();
	ZombieEvent human;
	human.setZombieType("runner");// runner
	Zombie* big = human.newZombie(name());

	delete big;
	return (0);
}