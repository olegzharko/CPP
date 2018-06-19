/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozharko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 15:17:50 by ozharko           #+#    #+#             */
/*   Updated: 2018/06/19 15:17:52 by ozharko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
private:
	std::string	_name;
	std::string	_type;
public:
	Zombie(std::string type, std::string name);
	~Zombie(void);

	std::string	type;
	std::string	name;
	void	announce(void);
	std::string	getName(void);
	std::string	getType(void);
};

#endif



