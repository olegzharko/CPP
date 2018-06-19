/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 15:18:12 by ozharko           #+#    #+#             */
/*   Updated: 2018/06/19 15:18:13 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
# include "Zombie.hpp"

# include <iostream>
# include <string>

class ZombieEvent
{
private:
	std::string _type;
	std::string _name;
public:
	ZombieEvent(void);
	~ZombieEvent(void);

	void	setZombieType(std::string str);
	Zombie* newZombie(std::string name);

};

#endif