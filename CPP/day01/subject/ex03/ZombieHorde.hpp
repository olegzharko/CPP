/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 17:00:35 by ozharko           #+#    #+#             */
/*   Updated: 2018/06/19 17:00:36 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H
# include <iostream>
# include <string>
# include "Zombie.hpp"

class ZombieHorde
{

public:
	ZombieHorde(int	n);
	~ZombieHorde(void);

	void	announce(void);

	Zombie*		horde;
	int			number;
};

#endif
